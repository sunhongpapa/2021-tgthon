int Led_pin = 3; // 디지털 3번 핀에 LED 연결

void setup() {
 pinMode(Led_pin, OUTPUT); // 디지털 핀 출력핀으로 설정
}

void loop() {
  digitalWrite(Led_pin,HIGH); // 3번 핀으로 5V 출력
  delay(1000);
  digitalWrite(Led_pin,LOW); // 3번 핀으로 0V 출력
  delay(1000);
}
