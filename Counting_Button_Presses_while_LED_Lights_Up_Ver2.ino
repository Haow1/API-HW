int ledPin = 6;
const int buttonPin = 7;

static int count = 0;
int buttonState = 0;
int preButtonState = 0;

void setup() {
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
    }
  } preButtonState = buttonState;
} digitalWrite(ledPin, LOW);
  delay(10);

}
