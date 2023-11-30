#include <stdlib.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int ledPin = 9;
const int buzzerPin = 8;
const int tempPin = A0;
int heartRate = 0;
int ledBlinkInterval = 0;
unsigned long previousMillisHeart = 0;
unsigned long previousMillisLed = 0;
unsigned long interval = 20000;

void setup() {
  lcd.begin(16, 2);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);

  // Gera valor inicial da freq. cardiaca
  heartRate = random(60, 220); 
  ledBlinkInterval  = 60000 / heartRate;
}

void loop() {
  unsigned long currentMillis = millis();

  // Verifica se ja passou do intervalo de 20sg
  if (currentMillis - previousMillisHeart >= interval) {
    previousMillisHeart = currentMillis;
    // Gera nova freq. cardiaca
    heartRate = random(60, 220);
    ledBlinkInterval  = 60000 / heartRate;
  }

  //Le a temperatura do sensor
  int tempReading = analogRead(tempPin);
  float tempVoltage = tempReading * 5.0 / 1024;
  float floatTemperature = (tempVoltage - 0.5) * 100;
  int temperature = round(floatTemperature);

  // Atualiza display de LCD
  
  lcd.setCursor(0, 0);
  lcd.print("Heart Rate: ");
  lcd.print(heartRate);
  lcd.setCursor(0, 1);
  lcd.print("Temperature: ");
  lcd.print(temperature);
  lcd.print("C");
  if (temperature > 36 || heartRate > 50) {
    digitalWrite(buzzerPin, HIGH);
    delay(100);
    digitalWrite(buzzerPin, LOW);
    delay(100);
  }

  // Verifica se ja passou do intervalo da led
  if(currentMillis - previousMillisLed >= ledBlinkInterval) {
    previousMillisLed = currentMillis;
    int ledBlinkInterval = 60000 / heartRate;
    digitalWrite(ledPin, HIGH);
    delay(100);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}
