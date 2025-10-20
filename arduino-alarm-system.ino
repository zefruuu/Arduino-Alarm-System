#include <Servo.h>

Servo myServo;  // создаём объект для управления сервоприводом

int pos = 0;    // переменная для хранения угла

void setup() {
  myServo.attach(13);  // подключаем сервопривод к цифровому пину 9
  Serial.begin(9600);
  Serial.println("Тест сервопривода запущен!");
}

void loop() {
  // Движение от 0 до 180 градусов
  for (pos = 0; pos <= 180; pos += 1) {
    myServo.write(pos);
    delay(15); // задержка для плавности
  }

  // Движение обратно от 180 до 0 градусов
  for (pos = 180; pos >= 0; pos -= 1) {
    myServo.write(pos);
    delay(15);
  }
}
