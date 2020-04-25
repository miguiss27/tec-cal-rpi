import keyboard
import time
a=0
keyboard.send('ctrl+alt+t')
while a<10:
	time.sleep(1)
	keyboard.send('ctrl+alt+t')
	time.sleep(1)
	keyboard.send('F11')
	a+=1
