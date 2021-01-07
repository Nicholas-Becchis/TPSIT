import random

mac = ""
mac = mac + random.choice("0123456789ABCDEF")
mac = mac + random.choice("0123456789ABCDEF")

for i in range(5):
    mac = mac + ":"
    mac = mac + random.choice("0123456789ABCDEF")
    mac = mac + random.choice("0123456789ABCDEF")

print(f"L'indirizzo mac è {mac}")
    

