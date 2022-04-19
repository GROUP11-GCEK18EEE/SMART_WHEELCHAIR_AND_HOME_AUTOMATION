
const int lpwm = 9 ; //initializing pin 2 as pwm
const int lin_1 = 10 ;
const int lin_2 = 11 ;
//Serial.begin(9600);   
const int rpwm = 5 ; //initializing pin 4 as pwm
const int rin_1 = 6 ;
const int rin_2 = 7 ;

const int pininput1  = 3; 
const int pininput2  = 4; 
int input1 ;
int input2 ;
void forward();
void stop();
void right();
void left();

void setup() {
  // put your setup code here, to run once:
   pinMode(lpwm,OUTPUT) ; //we have to set PWM pin as output
   pinMode(lin_1,OUTPUT) ; //Logic pins are also set as output
   pinMode(lin_2,OUTPUT) ;
   pinMode(rpwm,OUTPUT) ; //we have to set PWM pin as output
   pinMode(rin_1,OUTPUT) ; //Logic pins are also set as output
   pinMode(rin_2,OUTPUT) ;
   pinMode(pininput1,INPUT) ; 
   pinMode(pininput2,INPUT) ;
   Serial.begin(9600);
   
}

void loop() {
  //input1=HIGH;
  //input2=HIGH;
  input1 = digitalRead(pininput1);
  input2 = digitalRead(pininput2);
  Serial.println(input1);
  Serial.println(input2);
  analogWrite(lpwm,255) ;
  analogWrite(rpwm,255) ;
  if(input1 == HIGH && input2 == HIGH){
      forward();
    }
  else if(input1 == HIGH && input2 == LOW){
      left();
    }
   else if(input1 == LOW && input2 == HIGH){
      right();
    }
  else{
      stop();
    }

    
}

void forward(){
   digitalWrite(lin_1,HIGH) ;
   digitalWrite(lin_2,LOW) ;

   digitalWrite(rin_1,HIGH) ;
   digitalWrite(rin_2,LOW) ;
  
 }
 void stop(){
   digitalWrite(lin_1,LOW) ;
   digitalWrite(lin_2,LOW) ;
 
   digitalWrite(rin_1,LOW) ;
   digitalWrite(rin_2,LOW) ;

 }
 void left(){
   digitalWrite(lin_1,LOW) ;
   digitalWrite(lin_2,HIGH) ;
  
   digitalWrite(rin_1,HIGH) ;
   digitalWrite(rin_2,LOW) ;
 
 }
 void right(){
   digitalWrite(lin_1,HIGH) ;
   digitalWrite(lin_2,LOW) ;
 
   digitalWrite(rin_1,LOW) ;
   digitalWrite(rin_2,HIGH) ;

 }
