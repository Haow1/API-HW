#include <Scheduler.h>

int led1 = 5;
int led2 = 6;
int led3 = 7;

void setup() {
  Serial.begin(9600);

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);


  Scheduler.startLoop(loop2);
  Scheduler.startLoop(loop3);
}


void loop1() {
  digitalWrite(led1, HIGH);

 
  delay(1000);

  digitalWrite(led1, LOW);
  delay(1000);
}

void loop2() {
  digitalWrite(led2, HIGH);
  delay(100);
  digitalWrite(led2, LOW);
  delay(100);
}

void loop3() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c=='0') {
      digitalWrite(led3, LOW);
      Serial.println("Off!");
    }
    if (c=='1') {
      digitalWrite(led3, HIGH);
      Serial.println("On!");
    }
  }

  yield();
}
