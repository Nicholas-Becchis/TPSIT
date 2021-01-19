#Argomenti/parametri di default in input alle funzioni
def quadrato(lista_numeri, stampa=False):
    lista_quadrati = [x*x for x in lista_numeri] #in ogni elemento della nuova lista è = a x*x
    if stampa:
        print(lista_quadrati)
    return lista_quadrati

quadrato(stampa=True, lista_numeri=[2,10])


