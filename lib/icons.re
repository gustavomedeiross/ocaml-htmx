open Tyxml;

let svgIcon = (~pathD, ~width: float, ~height: float) => {
  <Html.svg
    width=(width, None)
    height=(height, None)
    viewBox=(0., 0., width, height)>
    <path d=pathD fill="currentColor" />
  </Html.svg>;
};

let arrowDown = (~width, ~height) =>
  svgIcon(
    ~width,
    ~height,
    ~pathD=
      "M17.6 3.20012L17.6 22.6801L26.56 13.7201L28.8 16.0001L16 28.8001L3.19999 16.0001L5.43999 13.7201L14.4 22.6801L14.4 3.20012L17.6 3.20012Z",
  );

let arrowUp = (~width, ~height) =>
  svgIcon(
    ~width,
    ~height,
    ~pathD=
      "M14.4 28.8001V9.32013L5.43998 18.2801L3.19998 16.0001L16 3.20013L28.8 16.0001L26.56 18.2801L17.6 9.32013V28.8001H14.4Z",
  );

let bank = (~width, ~height) =>
  svgIcon(
    ~width,
    ~height,
    ~pathD=
      "M7.04001 23.68V14.72H9.60001V23.68H7.04001ZM14.72 23.68V14.72H17.28V23.68H14.72ZM3.20001 28.8V26.24H28.8V28.8H3.20001ZM22.4 23.68V14.72H24.96V23.68H22.4ZM3.20001 12.16V9.60001L16 3.20001L28.8 9.60001V12.16H3.20001ZM8.89601 9.60001H23.104L16 6.08001L8.89601 9.60001Z",
  );

let chevronDown = (~width, ~height) =>
  svgIcon(
    ~width,
    ~height,
    ~pathD="M18 6L10 14L2 6L3.42 4.58L10 11.16L16.58 4.58L18 6Z",
  );

let house = (~width, ~height) =>
  svgIcon(
    ~width,
    ~height,
    ~pathD=
      "M10 3L18 9L17.1273 10.1636L15.8182 9.18182V16.0909H4.18182V9.18182L2.87273 10.1636L2 9L10 3ZM14.3636 14.6364V8.09091L10 4.81818L5.63636 8.09091V14.6364H14.3636Z",
  );

let notifications = (~width, ~height) =>
  svgIcon(
    ~width,
    ~height,
    ~pathD=
      "M4.80005 18.7201V16.8001H6.72005V10.0801C6.72005 8.75209 7.12005 7.57209 7.92005 6.54009C8.72005 5.50809 9.76005 4.83209 11.04 4.51209V3.84009C11.04 3.44009 11.18 3.10009 11.46 2.82009C11.74 2.54009 12.08 2.40009 12.48 2.40009C12.88 2.40009 13.22 2.54009 13.5 2.82009C13.78 3.10009 13.92 3.44009 13.92 3.84009V4.51209C15.2 4.83209 16.24 5.50809 17.04 6.54009C17.84 7.57209 18.24 8.75209 18.24 10.0801V16.8001H20.16V18.7201H4.80005ZM12.48 21.6001C11.952 21.6001 11.5 21.4121 11.124 21.0361C10.748 20.6601 10.56 20.2081 10.56 19.6801H14.4C14.4 20.2081 14.212 20.6601 13.836 21.0361C13.46 21.4121 13.008 21.6001 12.48 21.6001ZM8.64005 16.8001H16.32V10.0801C16.32 9.02409 15.944 8.12009 15.192 7.36809C14.44 6.61609 13.536 6.24009 12.48 6.24009C11.424 6.24009 10.52 6.61609 9.76805 7.36809C9.01605 8.12009 8.64005 9.02409 8.64005 10.0801V16.8001Z",
  );

let person = (~width, ~height) =>
  svgIcon(
    ~width,
    ~height,
    ~pathD=
      "M10 10C8.9 10 7.95833 9.60833 7.175 8.825C6.39167 8.04167 6 7.1 6 6C6 4.9 6.39167 3.95833 7.175 3.175C7.95833 2.39167 8.9 2 10 2C11.1 2 12.0417 2.39167 12.825 3.175C13.6083 3.95833 14 4.9 14 6C14 7.1 13.6083 8.04167 12.825 8.825C12.0417 9.60833 11.1 10 10 10ZM2 18V15.2C2 14.6333 2.14583 14.1125 2.4375 13.6375C2.72917 13.1625 3.11667 12.8 3.6 12.55C4.63333 12.0333 5.68333 11.6458 6.75 11.3875C7.81667 11.1292 8.9 11 10 11C11.1 11 12.1833 11.1292 13.25 11.3875C14.3167 11.6458 15.3667 12.0333 16.4 12.55C16.8833 12.8 17.2708 13.1625 17.5625 13.6375C17.8542 14.1125 18 14.6333 18 15.2V18H2ZM4 16H16V15.2C16 15.0167 15.9542 14.85 15.8625 14.7C15.7708 14.55 15.65 14.4333 15.5 14.35C14.6 13.9 13.6917 13.5625 12.775 13.3375C11.8583 13.1125 10.9333 13 10 13C9.06667 13 8.14167 13.1125 7.225 13.3375C6.30833 13.5625 5.4 13.9 4.5 14.35C4.35 14.4333 4.22917 14.55 4.1375 14.7C4.04583 14.85 4 15.0167 4 15.2V16ZM10 8C10.55 8 11.0208 7.80417 11.4125 7.4125C11.8042 7.02083 12 6.55 12 6C12 5.45 11.8042 4.97917 11.4125 4.5875C11.0208 4.19583 10.55 4 10 4C9.45 4 8.97917 4.19583 8.5875 4.5875C8.19583 4.97917 8 5.45 8 6C8 6.55 8.19583 7.02083 8.5875 7.4125C8.97917 7.80417 9.45 8 10 8Z",
  );
let questionMark = (~width, ~height) =>
  svgIcon(
    ~width,
    ~height,
    ~pathD=
      "M8.41053 12.9474C8.41053 11.8105 8.51228 10.993 8.71579 10.4947C8.9193 9.99649 9.35088 9.45263 10.0105 8.86316C10.586 8.3579 11.0246 7.9193 11.3263 7.54737C11.6281 7.17544 11.7789 6.75088 11.7789 6.27368C11.7789 5.69825 11.586 5.22105 11.2 4.84211C10.814 4.46316 10.2772 4.27368 9.58947 4.27368C8.87368 4.27368 8.32983 4.49123 7.9579 4.92632C7.58597 5.3614 7.32281 5.80351 7.16842 6.25263L5 5.32632C5.29474 4.42807 5.83509 3.64912 6.62105 2.98947C7.40702 2.32982 8.39649 2 9.58947 2C11.0632 2 12.1965 2.41053 12.9895 3.23158C13.7825 4.05263 14.1789 5.0386 14.1789 6.18947C14.1789 6.89123 14.0281 7.49123 13.7263 7.98947C13.4246 8.48772 12.9509 9.05263 12.3053 9.68421C11.6175 10.3439 11.2 10.8456 11.0526 11.1895C10.9053 11.5333 10.8316 12.1193 10.8316 12.9474H8.41053ZM9.58947 18C9.12632 18 8.72983 17.8351 8.4 17.5053C8.07018 17.1754 7.90526 16.7789 7.90526 16.3158C7.90526 15.8526 8.07018 15.4561 8.4 15.1263C8.72983 14.7965 9.12632 14.6316 9.58947 14.6316C10.0526 14.6316 10.4491 14.7965 10.7789 15.1263C11.1088 15.4561 11.2737 15.8526 11.2737 16.3158C11.2737 16.7789 11.1088 17.1754 10.7789 17.5053C10.4491 17.8351 10.0526 18 9.58947 18Z",
  );
let receipt = (~width, ~height) =>
  svgIcon(
    ~width,
    ~height,
    ~pathD=
      "M8.64005 28.7999C7.57338 28.7999 6.66672 28.4266 5.92005 27.6799C5.17338 26.9333 4.80005 26.0266 4.80005 24.9599V21.1199H8.64005V3.19992H27.84V24.9599C27.84 26.0266 27.4667 26.9333 26.7201 27.6799C25.9734 28.4266 25.0667 28.7999 24 28.7999H8.64005ZM24 26.2399C24.3627 26.2399 24.6667 26.1173 24.9121 25.8719C25.1574 25.6266 25.2801 25.3226 25.2801 24.9599V5.75992H11.2V21.1199H22.7201V24.9599C22.7201 25.3226 22.8427 25.6266 23.0881 25.8719C23.3334 26.1173 23.6374 26.2399 24 26.2399ZM12.48 12.1599V9.59992H24V12.1599H12.48ZM12.48 15.9999V13.4399H24V15.9999H12.48ZM8.64005 26.2399H20.16V23.6799H7.36005V24.9599C7.36005 25.3226 7.48272 25.6266 7.72805 25.8719C7.97338 26.1173 8.27738 26.2399 8.64005 26.2399ZM8.64005 26.2399H7.36005H20.16H8.64005Z",
  );