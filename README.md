# SMART_WHEELCHAIR_AND_HOME_AUTOMATION
We are proposing an automated working prototype of a smart wheelchair and home automation system that can be controlled by eye-tracking. The prototype shall be designed for paralyzed people with only motor functions for eye movement. We are also considering making the wheelchair aware of its surroundings, obstructions and making decisions accordingly.<br>

OBJECTIVES <br>
 To track eye movement and control basic devices like bulb, fan etc.<br>
 To design and implement an autonomous electric wheelchair.<br>
 To control the electric wheel chair by tracking eye movements.<br>

SMART WHEELCHAIR<br>
The camera module in eye tracker captures the eyeball movement. A python program for eye tracker identifies the position of the pupil. The combination of position of the pupil is transmitted to the micro controller with the help of Bluetooth module. The micro controller determines the command that needed to be executed according to the position of pupil. Based on the command wheelchair or home appliances are selected. If the selected mode is wheel chair, then the movement is controlled based on the position of pupil. Else if home appliances are selected, the devices are turned ON based on the combinations of the pupil with the help of Node MCU and relay circuits.
