#define rightSpeed 3
#define rightForwards 12
#define rightBackwards 11
#define leftSpeed 6
#define leftForwards 7
#define leftBackwards 8

void stop(){
  digitalWrite(rightForwards, LOW);
  digitalWrite(rightBackwards, LOW);
  digitalWrite(leftForwards, LOW);
  digitalWrite(leftBackwards, LOW);
}
void init_GPIO(){
  pinMode(rightForwards, OUTPUT);
  pinMode(rightBackwards, OUTPUT);
  pinMode(rightSpeed, OUTPUT);
  pinMode(leftForwards, OUTPUT);
  pinMode(leftBackwards, OUTPUT);
  pinMode(leftSpeed, OUTPUT);
  stop();
}

void circle(){
  digitalWrite(rightForwards, HIGH);
  digitalWrite(rightBackwards, LOW);
  digitalWrite(leftForwards, HIGH);
  digitalWrite(leftBackwards, LOW);
  analogWrite(rightSpeed, 255);
  analogWrite(leftSpeed, 100);
  delay(8000);
}

void setup() {
  // put your setup code here, to run once:
  init_GPIO();
  circle();
  stop();
}

void loop() {
  // put your main code here, to run repeatedly:
  
}


