
const int lpwm = 9 ; //initializing pin 2 as pwm
const int lin_1 = 10 ;
const int lin_2 = 11 ;
//Serial.begin(9600);   
const int rpwm = 5 ; //initializing pin 4 as pwm
const int rin_1 = 6 ;
const int rin_2 = 7 ;

const int pininput1  = 4; 
const int pininput2  = 3; 
int input1 = 0;
int input2 = 0;
void forward(){
   digitalWrite(lin_1,HIGH) ;
   digitalWrite(lin_2,LOW) ;
   analogWrite(lpwm,255) ;
   digitalWrite(rin_1,HIGH) ;
   digitalWrite(rin_2,LOW) ;
   analogWrite(rpwm,255) ;
 }
 void stop(){
   digitalWrite(lin_1,LOW) ;
   digitalWrite(lin_2,LOW) ;
   analogWrite(lpwm,255) ;
   digitalWrite(rin_1,LOW) ;
   digitalWrite(rin_2,LOW) ;
   analogWrite(rpwm,255) ;
 }
 void left(){
   digitalWrite(lin_1,LOW) ;
   digitalWrite(lin_2,HIGH) ;
   analogWrite(lpwm,255) ;
   digitalWrite(rin_1,HIGH) ;
   digitalWrite(rin_2,LOW) ;
   analogWrite(rpwm,255) ;
 }
 void right(){
   digitalWrite(lin_1,HIGH) ;
   digitalWrite(lin_2,LOW) ;
   analogWrite(lpwm,255) ;
   digitalWrite(rin_1,LOW) ;
   digitalWrite(rin_2,HIGH) ;
   analogWrite(rpwm,255) ;
 }
void setup() {
  // put your setup code here, to run once:
   pinMode(lpwm,OUTPUT) ; //we have to set PWM pin as output
   pinMode(lin_1,OUTPUT) ; //Logic pins are also set as output
   pinMode(lin_2,OUTPUT) ;
   pinMode(rpwm,OUTPUT) ; //we have to set PWM pin as output
   pinMode(rin_1,OUTPUT) ; //Logic pins are also set as output
   pinMode(rin_2,OUTPUT) ;
   pinMode(input1,INPUT) ; 
   pinMode(input2,INPUT) ;
   
}

void loop() {
 /* int sensorValue1 = digitalRead(input1);
  // print out the value you read:
  Serial.print("sensor  Value 1= " );
  Serial.print(sensorValue1);
  int sensorValue2 = digitalRead(input2);
  // print out the value you read:
  Serial.print("sensor  Value 2= " );
  Serial.print(sensorValue2);*/
  input1 = digitalRead(pininput1);
  input2 = digitalRead(pininput2);
  if(input1 == 1 && input2 == 1){
      forward();
    }
  else if(input1 == 1 && input2 == 0){
      left();
    }
   else if(input1 == 0 && input2 == 1){
      right();
    }
  else{
      stop();
    }

    
}
