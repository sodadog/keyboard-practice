void setup() {
  // 処理スキップ用スイッチを入力にセット
  // INPUT_PULLUPはアクティブロー（スイッチオンでLOWになる）
  pinMode(9, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // 9番のスイッチが押されたら
  if (digitalRead(9) == LOW) {
    // シリアル通信で文字を吐き出す
    // arduino_ideならシリアルモニタで閲覧できる
    Serial.println("pressed!");
  }
  // すぐループしてしまうので、スイッチ押している間に連続printしないためにちょい待つ
  delay(1000);
}
