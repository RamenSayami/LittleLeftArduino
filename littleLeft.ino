 int FRONT = 1;
 int BACK = 2;
 int STOP = 3;

 int motorL_1=8;
 int motorL_2=9;
 int motorR_1=12;
 int motorR_2=13;

void setup() {
  Serial.begin(9600);
  pinMode(motorL_1,OUTPUT);
  pinMode(motorL_2,OUTPUT);
  pinMode(motorR_1,OUTPUT);
  pinMode(motorR_2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  void littleLeft();
}

void littleLeft(){
  left_wheel(FRONT);
  right_wheel(FRONT);
  delay(50);
  left_wheel(FRONT);
  right_wheel(STOP);
  delay(50);
  
}

void left_wheel(int direction){
  if(direction == FRONT){
      digitalWrite(motorL_1,LOW);
      digitalWrite(motorL_2,HIGH);
  }
  else if(direction == BACK){
      digitalWrite(motorL_1,HIGH);
      digitalWrite(motorL_2,LOW);
  }
  else if(direction == STOP){
      digitalWrite(motorL_1,LOW);
      digitalWrite(motorL_2,LOW);
  }
}

void right_wheel(int direction){
  if(direction == FRONT){
      digitalWrite(motorR_1,LOW);
      digitalWrite(motorR_2,HIGH);
  }
  else if(direction == BACK){
      digitalWrite(motorR_1,HIGH);
      digitalWrite(motorR_2,LOW);
  }
  else if(direction == STOP){
      digitalWrite(motorR_1,LOW);
      digitalWrite(motorR_2,LOW);
  }
}  


