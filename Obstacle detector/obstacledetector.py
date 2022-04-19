import RPi.GPIO as GPIO 

import time 

GPIO.setmode(GPIO.BCM) 

GPIO_TRIG = 11 

GPIO_ECHO_RF = 18
GPIO_ECHO_RD = 19
GPIO_ECHO_LF = 20
GPIO_ECHO_LD = 21

GPIO.setup(GPIO_TRIG, GPIO.OUT) 

GPIO.setup(GPIO_ECHO_RF, GPIO.IN) 

GPIO.setup(GPIO_ECHO_RD, GPIO.IN) 

GPIO.setup(GPIO_ECHO_LF, GPIO.IN) 

GPIO.setup(GPIO_ECHO_LD, GPIO.IN) 

def obstacle(GPIO_ECHO):

    GPIO.output(GPIO_TRIG, GPIO.LOW) 

    time.sleep(2) 

    GPIO.output(GPIO_TRIG, GPIO.HIGH) 

    time.sleep(0.00001) 

    GPIO.output(GPIO_TRIG, GPIO.LOW) 
    
    while GPIO.input(GPIO_ECHO)==0: 

        start_time = time.time() 

    while GPIO.input(GPIO_ECHO)==1: 

        Bounce_back_time = time.time() 

    pulse_duration = Bounce_back_time - start_time 

    distance = round(pulse_duration * 17150, 2) 

    return distance

distanceRightFront = obstacle(GPIO_ECHO_LD)
distanceRightDown = obstacle(GPIO_ECHO_LF)
distanceLeftFront = obstacle(GPIO_ECHO_RD)
distanceLeftDown = obstacle(GPIO_ECHO_RF)
print("Distance of sensors 1 = " )
print(GPIO_ECHO_LD)

print("Distance of sensors 2 = " )
print(GPIO_ECHO_LF)

print("Distance of sensors 3 =" )
print(GPIO_ECHO_RD)

print("Distance of sensors 4 =" )
print(GPIO_ECHO_RF)

if(0):
    print("stop wheelchair")

GPIO.cleanup() 

