#include <LiquidCrystal.h>
LiquidCrystal lcd(53, 51, 47, 43, 39, 35);

int ledPin = 6;
const int buttonPin = 7;

static int count = 0;
int buttonState = 0;
int preButtonState = 0;

void setup() {
  lcd.begin(16, 2);
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
buttonState = digitalRead(buttonPin);

digitalWrite(ledPin, HIGH);

unsigned long time = millis ();

while( millis()-time < 300) {

  buttonState = digitalRead(buttonPin);
  if (buttonState != preButtonState ){
    if (buttonState == LOW){
      count = count + 1;
      lcd.setCursor(7, 1);
    lcd.print(count);
    }
  } preButtonState = buttonState;
} digitalWrite(ledPin, LOW);
  delay(10);

}
