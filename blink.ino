// 電源を入れたときに一回だけ実行される関数だよ。ピンの設定だったりを書くよ。
void setup() {
  // デジタルピンの初期化。LED_BUILTINというピンを出力モードにしてるよ。
  pinMode(LED_BUILTIN, OUTPUT);
}

// loop関数はその名の通りクルクル何回も実行されるよ。無茶な処理をさせると暴走しちゃうかも？？？
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // LED_BUILTINの電圧をHIGH
  delay(1000);                       // 1000 ms待つ
  digitalWrite(LED_BUILTIN, LOW);    // LED_BUILTINの電圧をLOW
  delay(1000);                       // 1000 ms待つ
}
