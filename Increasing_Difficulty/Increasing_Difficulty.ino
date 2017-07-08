#include <LiquidCrystal.h>

int ledPin = 6;
const int buttonPin = 7;

LiquidCrystal lcd(53, 51, 47, 43, 39, 35);

static int count = 0;
int buttonState = 0;
int preButtonState = 0;

unsigned long minutes = 60000;

void setup() {
lcd.clear();
Serial.begin(9600);
lcd.begin(16, 2);
  
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);

lcd.setCursor(0, 0);
 lcd.print("Dance! xwyz!Lv.1");
 delay(1000);  
  lcd.setCursor(6, 1);
 lcd.print("3!");
 delay(1000);  
   lcd.setCursor(6, 1);
 lcd.print("2!");
  delay(1000);  
   lcd.setCursor(6, 1);
 lcd.print("1!");
  delay(1000);  
   lcd.setCursor(6, 1);
 lcd.print("Go!");
  delay(1000);  
  lcd.clear();
}


void loop() {
  if(millis() < minutes * 1) {
lcd.setCursor(0, 0);
 lcd.print("Dance! xwyz!");
  delay(1000); 

digitalWrite(ledPin, HIGH);

unsigned long time = millis ();

while( millis()-time < 500) {

  buttonState = digitalRead(buttonPin);
  if (buttonState != preButtonState ){
    if (buttonState == LOW){
      count = count + 1;
    }
  } preButtonState = buttonState;
} digitalWrite(ledPin, LOW);
  delay(10);
 }
 else {
  if (count < 30) {
    lcd.setCursor(0, 0);
 lcd.print("Your Score is:");
  lcd.setCursor(6, 1);
 lcd.print(count);
  }
  else {
    lcd.setCursor(0, 0);
 lcd.print("Dance! xwyz!Lv.2");
 delay(1000);  
  lcd.setCursor(6, 1);
 lcd.print("3!");
 delay(1000);  
   lcd.setCursor(6, 1);
 lcd.print("2!");
  delay(1000);  
   lcd.setCursor(6, 1);
 lcd.print("1!");
  delay(1000);  
   lcd.setCursor(6, 1);
 lcd.print("Go!");
  delay(1000);  
  lcd.clear();

  void loop(){
  if(millis() < minutes * 1) {
lcd.setCursor(0, 0);
 lcd.print("Dance! xwyz!");
  delay(1000); 

digitalWrite(ledPin, HIGH);

unsigned long time = millis ();

while( millis()-time < 300) {

  buttonState = digitalRead(buttonPin);
  if (buttonState != preButtonState ){
    if (buttonState == LOW){
      count = count + 1;
    }
  } preButtonState = buttonState;
} digitalWrite(ledPin, LOW);
  delay(10);
 } else {    
   lcd.setCursor(0, 0);
 lcd.print("Your Score is:");
  lcd.setCursor(6, 1);
 lcd.print(count);
 }
  }
 }
  }
