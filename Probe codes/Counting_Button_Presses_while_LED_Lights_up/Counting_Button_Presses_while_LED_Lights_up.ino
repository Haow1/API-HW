int ledPin = 6;
const int buttonPin = 7;

int count = 0;
int buttonState = 0;

void setup() {
Serial.begin(9600);
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);  

}

void loop() {
buttonState = digitalRead(buttonPin);
    
digitalWrite(ledPin , HIGH);
delay(1000);
digitalWrite(ledPin , LOW);
delay(1000);

if (digitalRead(ledPin == HIGH)) {
  if (digitalRead(buttonState == HIGH)) {
    count++;
    delay(300);
  } else { count=count; }
}
}
