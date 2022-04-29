void setup() {

  // 115200 bpsでシリアル通信開始
  Serial.begin(115200);

}

void loop() {
  
  // シリアルの改行付きで(" ")内の文字列をシリアルにプリント
  Serial.println("Welcome to PLANET-Q!!!!!");
  delay(1000);
  
}

// printlnの"ln"が改行を意味してるよ。消してみると。。。？
// delay関数は所定の時間分、処理を停止するよ。単位はms。絶対に必要！！！なんで必要なのかな？？
// 自由にパラメータをいじって遊んでみよう！
