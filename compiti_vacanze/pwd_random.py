#Creare un generatore casuale di password
import random
import string

#Genera una password
password = ""
for i in range(8):
    password = password + random.choice(string.ascii_uppercase + string.digits)

print(f"La password generata è: {password}")