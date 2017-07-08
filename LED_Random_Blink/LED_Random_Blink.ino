int LED_1 = 5;
int LED_2 = 6;
int LED_3 = 7;

long randomNumber;

void setup() {
 Serial.begin(9600);
 
pinMode(LED_1,OUTPUT);
pinMode(LED_2,OUTPUT);
pinMode(LED_3,OUTPUT);

randomSeed(analogRead(0));
}

void loop() {
 randomNumber = random(5,8);
  Serial.println(randomNumber);
  digitalWrite(randomNumber,HIGH);
  delay(1000);
  digitalWrite(randomNumber,LOW);
  delay(100);

}
