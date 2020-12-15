numero = 7
#esempio di f-string
print(f"Il valore di numero è {numero}")
#esempio di concatenazione
print("Il valore di numero è" + str(numero))

s1 = 'ciao'
s2 = "ciao"

print(s1==s2) #stampa un valore bouleano "true", quindi i due ciao sono uguali

#---------------------------------------------

#Python è un programma orientato agli oggetti, in Python tutto è un oggetto
numero = 7 #é un oggetto overo una lista della classe int

#FUNZIONI
def lamiafunzione(argomento1, argomento2):
    #codice della funzione indentato
    return argomento1+argomento2

print(f"La somma è: {lamiafunzione(5,4)}")

#COLLEZIONI: liste, tuple, dizionari

#LISTE, sono "simili" agli array del C
lista = [3,5,1,6,7]
print(f"La lista é: {lista}")

#Python style
for elemento in lista:
    print(elemento)

print("-----------------------------")    

#C style
lunghezza = len(lista)
for indice in range(0,lunghezza):
    print(lista[indice])    