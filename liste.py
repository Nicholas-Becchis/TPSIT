lista = [3,2,-1,6,5]

#python style
#for elemento in lista:
    #print(elemento)

#C style
#for i in range(0, len(lista)):
    #print(lista[i])

#Python style con enumeratore
for i, elemento in enumerate(lista):
    print(f"{i} - {elemento}")

#While
contatore = 0
while(contatore<len(lista)):
    print(lista[contatore])
    contatore = contatore + 1


# I DIZIONARI
#un dizionario è una collezione (non ordinata) di elementi, ciascuno dei quali è costituito da una chiave e un valore
#ogni elemento di un dizionario è una coppia chiave:valore

dizionario = {1:"Antonelli", 2:"Becchis", 3:"Bianco", 4:"Bongiovanni"}

#per accedere al VALORE  di un elemento del dizionario si utilizza la notazione 
#nome_dizionario[chiave]
dizionario[19] = "Orlando"

print(dizionario[2])

#apertura file
file = ope("./canzoni.csv","r")
for riga in file:
        print(riga)

file.close()        