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
    //前進
    analogWrite(5,255);
    analogWrite(3,0);
    analogWrite(10,255);
    analogWrite(11,0);
    delay(3000);
    //後進
    analogWrite(5,0);
    analogWrite(3,255);
    analogWrite(10,0);
    analogWrite(11,255);
    delay(3000);
    //右回転
    analogWrite(5,255);
    analogWrite(3,0);
    analogWrite(10,0);
    analogWrite(11,0);
    delay(3000);
    //左回転
    analogWrite(5,0);
    analogWrite(3,0);
    analogWrite(10,255);
    analogWrite(11,0);
    delay(3000);
    roop++;
    if(roop==2){
       for(;;){
        analogWrite(5,0);
        analogWrite(3,0);
        analogWrite(10,0);
        analogWrite(11,0);
        }
      }
}
