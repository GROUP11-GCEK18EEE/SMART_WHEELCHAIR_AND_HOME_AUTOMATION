
const int lpwm = 9 ; //initializing pin 2 as pwm
const int lin_1 = 10 ;
const int lin_2 = 11 ;
//Serial.begin(9600);   
const int rpwm = 5 ; //initializing pin 4 as pwm
const int rin_1 = 6 ;
const int rin_2 = 7 ;

const int pininput1  = 2; 
const int pininput2  = 4; 
int input1 ;
int input2 ;

/*int trigPin = 11;    // Trigger
int echoPin1 = 12;    // Echo
int echoPin2 = 12; 
int echoPin3 = 12; 
int echoPin4 = 12; */

//long duration1, duration2, duration3, duration4, cm1, cm2, cm3, cm4;
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
   
   /*pinMode(trigPin, OUTPUT);
   pinMode(echoPin1, INPUT);
   pinMode(echoPin2, INPUT);
   pinMode(echoPin3, INPUT);
   pinMode(echoPin4, INPUT);*/
   
   
   Serial.begin(9600);
   
}

void loop() {
  
  input1 = digitalRead(pininput1);
  input2 = digitalRead(pininput2);
  //input1=HIGH;
  //input2=HIGH;
  Serial.println(input1);
  Serial.println(input2);
  analogWrite(lpwm,255) ;
  analogWrite(rpwm,255) ;

  /*digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin1, INPUT);
  duration1 = pulseIn(echoPin1, HIGH);
  cm1 = (duration1/2) / 29.1;
  pinMode(echoPin2, INPUT);
  duration2 = pulseIn(echoPin2, HIGH);
  cm2 = (duration2/2) / 29.1;
  pinMode(echoPin3, INPUT);
  duration3 = pulseIn(echoPin3, HIGH);
  cm3 = (duration3/2) / 29.1;
  pinMode(echoPin4, INPUT);
  duration4 = pulseIn(echoPin4, HIGH);
  cm4 = (duration4/2) / 29.1;*/
  
  if(input1 == HIGH && input2 == HIGH ){
      forward();
    }
  else if(input1 == HIGH && input2 == LOW ){
      left();
    }
   else if(input1 == LOW && input2 == HIGH ){
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
