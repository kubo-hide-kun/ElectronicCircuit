int roop = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(10,HIGH);
  int pw1 = analogRead(A0);
  if( roop++ % 500 == 0)Serial.println(pw1);
  // false: 前進, true: 後退
  ctrl(pw1 < 330, pw1 < 330);
}

void ctrl(bool right, bool left) {
  
  if(right) {
    digitalWrite(8,LOW);
    digitalWrite(9,LOW);
  } else {
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);;
  }
  
  if(left) {
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
  } else {
    digitalWrite(12,HIGH);
    digitalWrite(13,LOW);
  }
  
}
