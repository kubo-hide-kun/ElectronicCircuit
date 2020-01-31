int roop = 0;
int i;

void setup() {
  // put your setup code here, to run once:
   pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  /*pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);*/
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(8,HIGH);
  int pw1 = analogRead(A0); //pw1:基準150 右側
  int pw2 = analogRead(A1); //pw2:基準140　左側
  if( roop++ % 500 == 0)Serial.println(pw2);
    if(pw1>150){
      analogWrite(5,100);
      analogWrite(3,0);
      analogWrite(10,100);
      analogWrite(11,0);
    }else{
        analogWrite(5,0);
        analogWrite(3,0);
        analogWrite(10,0);
        analogWrite(11,0);
      }
}
