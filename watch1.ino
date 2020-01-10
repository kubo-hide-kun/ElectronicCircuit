int roop = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  int pw = analogRead(0);
  if( roop++ % 500 == 0)Serial.println(pw);
  delay(1);
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
