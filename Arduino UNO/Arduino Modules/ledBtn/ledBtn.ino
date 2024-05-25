const int BUTTON_PIN = A1;  // 將按鈕接腳設為A1
const int LED_PIN = A0;     // 將LED燈的接腳設為A0

int buttonState = 1;        // 按鈕的狀態

void setup() {
  pinMode(LED_PIN, OUTPUT);     // 設定LED的PIN腳為輸出
  pinMode(BUTTON_PIN, INPUT);   // 設定按鈕的接腳為輸入
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);  // 讀取按鍵的狀態

  if (buttonState == LOW) {     // 如果按鍵按了 (根據接線方式可能需要調整)
    digitalWrite(LED_PIN, HIGH); // LED就亮了
  } else {                       // 如果按鍵是未按下
    digitalWrite(LED_PIN, LOW);  // LED就不亮
  }
}
