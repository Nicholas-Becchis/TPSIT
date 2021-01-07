m = input("Inserire il numero: ")
n = int(m)

somma = 1
prec = 1
print(somma)
print(somma)


for i in range (n-1):
    somma = somma + prec
    prec = somma - prec
    print(somma)
    