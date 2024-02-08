from multiprocessing import spawn
import time
import pyautogui as pg

msg = input("type the massage you want to send?\n")
n = int(input('How many times you want to send the message?\n'))
print('You have 30 seconds to open the chat where you want to send the message.')
time.sleep(10)

for i in range(n):
    pg.write(msg)
    pg.press('enter')