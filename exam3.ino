int roop = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
 /* pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);*/
  pinMode(8,OUTPUT);
  Serial.begin(9600);
}

void z  loop() {
  digitalWrite(8,HIGH); //10→8
  int pw1 = analogRead(A0); //pw1:基準150 右側
  int pw2 = analogRead(A1); //pw2:基準140　左側
  if( roop++ % 500 == 0)Serial.println(pw1);
  // false: 前進, true: 後退 
  ctrl(pw1, pw2);
}

void ctrl(int pw1, int pw2 ) {
  delay(1);
  if(pw1<150 && pw2<140) {
    //前進
    analogWrite(5,130); //9→5 
    analogWrite(3,0); //右タイヤ 8→3

    analogWrite(9,130); //12→10
    analogWrite(11,0); //左タイヤ 13→11
     
  } else if(pw1>150 && pw2<140) {
    //右周り
    analogWrite(5,220);
    analogWrite(3,0);; //右タイヤ

    analogWrite(9,25);
    analogWrite(11,0); //左タイヤ
    delay(100);
  }else if(pw1<150 && pw2>140){
    //左周り
    analogWrite(5,25);
    analogWrite(3,0); //右タイヤ
    
    analogWrite(9,220);
    analogWrite(11,0); //左タイヤ
  
    delay(100);    
    }else if(pw1>150 && pw2>140){
      //後進
       analogWrite(5,0);
       analogWrite(3,125); //右タイヤ

       analogWrite(9,0);
       analogWrite(11,125); //左タイヤ     
      }

}
