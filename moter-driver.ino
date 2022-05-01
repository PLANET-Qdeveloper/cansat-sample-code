void setup() {
  Serial.begin(115200);

  pinMode(9, OUTPUT); //9ピンをモータードライバの入力1に接続
  pinMode(8, OUTPUT); //8ピンをモータードライバの入力2に接続
  pinMode(10, OUTPUT); //10ピンをモータードライバのVrefに接続
}

void loop() {
  char c;

  if(Serial.available()){
    c = Serial.read();

    if(c == '1'){
      Serial.println("Front"); //1を入力すると正回転
      digitalWrite(9, LOW);
      digitalWrite(8, HIGH);
      analogWrite(10, 255);

      delay(1000);

      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
    }
    else if(c == '2'){
      Serial.println("Back"); //2を入力すると逆回転
      digitalWrite(9, HIGH);
      digitalWrite(8, LOW);
      analogWrite(10, 255);
      
      delay(1000);

      digitalWrite(9, HIGH);
      digitalWrite(8, HIGH);
    } 
  }
}
