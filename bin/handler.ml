module type DB = Caqti_lwt.CONNECTION

module Payment = Storage.Payment

let payments request =
  let account_id = Dream.param request "account_id" in
  let%lwt payments = Storage.get_exn @@ Dream.sql request (Payment.get_all ~account_id) in
  View.to_dream_html @@ View.home payments request account_id
;;

let rec listen_to_new_payments stream =
  let%lwt () = Dream.write stream "data: <li>hello</li>\n\n" in
  let%lwt () = Dream.flush stream in
  let%lwt () = Lwt_unix.sleep 2.0 in
  listen_to_new_payments stream
;;

let payments_stream request =
  let _account_id = Dream.param request "account_id" in
  Dream.stream ~headers:[ "Content-Type", "text/event-stream" ] listen_to_new_payments
;;

let pay request =
  let open Payment in
  match%lwt Dream.form request with
  | `Ok
      [ ("amount", amount)
      ; ("recipient_account_id", recipient_account_id)
      ; ("sender_account_id", sender_account_id)
      ] ->
    let amount = int_of_string amount in
    let payment_id =
      Uuidm.v4_gen (Random.State.make_self_init ()) () |> Uuidm.to_string
    in
    let payment =
      { id = payment_id
      ; amount
      ; recipient_account_id
      ; sender_account_id
      ; timestamp = Ptime_clock.now ()
      }
    in
    let%lwt () = Storage.get_exn @@ Dream.sql request @@ Payment.create payment in
    View.elt_to_dream_html @@ View.payment_row payment
  | _ -> Dream.empty `Bad_Request
;;

let payment_details request =
  let payment_id = Dream.param request "payment_id" in
  let%lwt payment =
    Storage.get_exn @@ Dream.sql request @@ Payment.get_by_id ~payment_id
  in
  View.to_dream_html @@ View.payment_detail payment
;;
