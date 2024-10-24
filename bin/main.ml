module Handler = Handler
module Storage = Storage

let () =
  Dream.run ~port:42069
  @@ Dream.sql_pool "sqlite3:db.sqlite"
  @@ Dream.logger
  @@ Dream.memory_sessions
  @@ Dream.router
       [ Dream.get "accounts/:account_id" Handler.home
       ; Dream.get "/payments/:payment_id" Handler.payment_details
       ; Dream.post "/pay" Handler.pay
       ]
;;
