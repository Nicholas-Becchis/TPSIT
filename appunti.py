def somma(a,b):
    return a+b

def sottrazione(a,b):
    return a-b

def moltiplicazione(a,b):
    return a*b

def divisione(a,b):
    return a/b

def quadrato(a,b):
    return a*a, b*b

dizionario_funzioni = {0: somma, 1: moltiplicazione, 2: divisione, 3: sottrazione, 4: quadrato}

def main():
    val_utente = int(input("0 per sommare, 1 per moltiplicare, 2 per dividere, 3 per sottrarre, 4 per elevare al quadrato: "))
    a = int(input("primo numero: "))
    b = int(input("secondo numero: "))
    
    try:
        x = dizionario_funzioni[val_utente](a,b)
        print(x)
    except:
        print("Hai inserito un numero sbagliato")

    


if __name__ == "__main__":
    main()