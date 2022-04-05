#define Pin_D1_L  7 //lpwm
#define Pin_D2_L  6 //rpwm
#define Pin_E_L   9 //pwm enable

void setup()
{
  pinMode(Pin_D1_L, OUTPUT);
  pinMode(Pin_D2_L, OUTPUT);
  pinMode(Pin_E_L, OUTPUT);
  motor_stop();
}

void loop()
{
  motor_stop();   delay(100);
  motor_cw();     delay(1000);
  motor_stop();   delay(100);
  motor_ccw();     delay(1000);
}

void motor_cw()
{
  analogWrite(Pin_E_L, 50);
  digitalWrite(Pin_D1_L, HIGH);
  digitalWrite(Pin_D2_L, LOW);
}

void motor_ccw()
{
  analogWrite(Pin_E_L, 50); //0-255
  digitalWrite(Pin_D1_L, LOW);
  digitalWrite(Pin_D2_L, HIGH);
}

void motor_stop()
{
  digitalWrite(Pin_D1_L, LOW);
  digitalWrite(Pin_D2_L, LOW);
  analogWrite(Pin_E_L, 0);
}
