const int buttonPin = 5;
int count = 0;
int buttonState = 0;
int preButtonState = 0;

void setup() {
  pinMode(buttonPin,INPUT)
}
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState != preButtonState) {
    if (buttonState == LOW) {
      count = count + 1;
    }
  }
  buttonState = preButtonState;
}

