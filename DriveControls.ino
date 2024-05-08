#define rightSpeed 9
#define rightForwards 12
#define rightBackwards 11
#define leftSpeed 6
#define leftForwards 7
#define leftBackwards 8
void forwards(int t=0){
  digitalWrite(rightForwards, HIGH);
  digitalWrite(rightBackwards, LOW);
  digitalWrite(leftForwards, HIGH);
  digitalWrite(leftBackwards, LOW);
  analogWrite(rightSpeed, 200);
  analogWrite(leftSpeed, 200);
  delay(t);
}
void backwards(int t=0){
  digitalWrite(rightForwards, LOW);
  digitalWrite(rightBackwards, HIGH);
  digitalWrite(leftForwards, LOW);
  digitalWrite(leftBackwards, HIGH);
  analogWrite(rightSpeed, 170);
  analogWrite(leftSpeed, 200);
  delay(t);
}
void rotateLeft(int deg){
  digitalWrite(rightForwards, HIGH);
  digitalWrite(rightBackwards, LOW);
  digitalWrite(leftForwards, LOW);
  digitalWrite(leftBackwards, HIGH);
  analogWrite(rightSpeed, 200);
  analogWrite(leftSpeed, 200);
  int sleepTime = (2550/360)*deg;
  delay(sleepTime);
}
void rotateRight(int deg){
  digitalWrite(rightForwards, LOW);
  digitalWrite(rightBackwards, HIGH);
  digitalWrite(leftForwards, HIGH);
  digitalWrite(leftBackwards, LOW);
  analogWrite(rightSpeed, 200);
  int sleepTime = (2350/360)*deg;
  delay(sleepTime);
}

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
 void turnLeft(){
  digitalWrite(rightForwards, HIGH);
  digitalWrite(rightBackwards, LOW);
  digitalWrite(leftForwards, HIGH);
  digitalWrite(leftBackwards, LOW);
  analogWrite(rightSpeed, 200);
  analogWrite(leftSpeed, 200);
 }
 void turnRight(){

 }
 void square(){

  for(int x = 0; x < 4; x++){
    //straigten lines
    //adjust side to 2 feet
    forwards(1200);
    rotateLeft(90);
  }
  rotateLeft(45);// fix ending angle
 }
 void circle(){

 }

void setup() {
  // put your setup code here, to run once:
  init_GPIO();
  //square();
  //test angles
  //rotateLeft(720);
  forwards(1200);
  
  
  //rotateRight(2000);
  stop();
}

void loop() {
  // put your main code here, to run repeatedly:
  
}


