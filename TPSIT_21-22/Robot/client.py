from turtle import left
import requests
import threading as thr
from time import sleep

ip = "192.168.0.123"

class VerificaOstacoli(thr.Thread):
    def __init__(self):
        thr.Thread.__init__(self)
        self.running = True
        
    def run(self):
        while self.running:
            dictSensors = eval(requests.get(f"http://{ip}:5000/api/v1/sensors/obstacles").text)
            #print(dictSensors)
            sleep(0.100)
            if dictSensors["left"] == 0 or dictSensors["right"] == 0:
                dictStatus = eval(requests.get(f"http://{ip}:5000/api/v1/motors/stop").text)


if __name__ == '__main__':
    verifica_ostacoli = VerificaOstacoli()
    verifica_ostacoli.start()

    while True:
        dictStatus = eval(requests.get(f"http://{ip}:5000/api/v1/motors/both?pwmL=50&time=5&pwmR=-50").text)
