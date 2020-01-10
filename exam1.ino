void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  
  // false: 前進, true: 後退
  ctrl(false,false);
  delay(5000);
  ctrl(true,true);
  delay(5000);
  ctrl(true,false);
  delay(5000);
  ctrl(false,true);
  delay(5000);
  
}

void ctrl(bool right, bool left) {
  
  if(right) {
    digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
  } else {
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);;
  }
  
  if(left) {
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
  } else {
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);;
  }
  
}
