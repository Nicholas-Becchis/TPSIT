def rot15_cod(s):
    char = "abcdefghijklmnopqrstuvwxyz"
    somma = char[15:]+char[:15]
    rot15 = lambda c: somma[char.find(c)] if char.find(c)>-1 else c
    return ''.join( rot15(c) for c in s ) 

def rot15_dec(s):
    char = "abcdefghijklmnopqrstuvwxyz"
    somma = char[15:]+char[:11]
    rot15 = lambda c: somma[chars.find(c)] if chars.find(c)>+1 else c
    return ''.join( rot15(c) for c in s )

import string

print("Si desidera codificare o decodificare?")

n = int(input("Premere 1 per codificare e 2 per decodificare: "))

if n==1 :
    print("CODIFICA")
    s1 = input("Inserire una stringa: ")
    print(f"La codifica è {rot15_cod(s1)}")
else :
    print("DECODIFICA")
    s1 = input("Inserire una stringa: ")
    print(f"La decodifica è {rot15_dec(s1)}")

