# Import the required module for text
# to speech conversion
import pyttsx3

# init function to get an engine instance for the speech synthesis
engine = pyttsx3.init()

# say method on the engine that passing input text to be spoken
engine.say('Hello, I am shravan sreedeep. Nice to meet you. Initiating program.')
engine.runAndWait()

