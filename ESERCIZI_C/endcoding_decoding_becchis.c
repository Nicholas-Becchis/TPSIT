#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

#define DIM 10

int main ()
{
    /*Dichiaro la dimensione della stringa come variabile, poi la chiedo all'utente*/
    int i;

    /*Inizializzo la stringa*/
    char stringa[DIM];

    /*Creo la stringa*/
    printf("Inserire la stringa:\n");
    scanf("%s", stringa);

    /*Dichiaro le due ariabili per poi chiedere all'utende quale delle due azioni uole effettuare*/
    int risp;      
    printf("Si vuole effettuare un'azione di endcoding (premere 1) o decoding (premere 2)?\n");
    scanf("%d", &risp);

    /*If per capire se bisogna effettuare un'azione di endcoding o decoding*/
    if(risp == 1)
    {
        printf("L'encoding e:\n");

        /*Inizializzo un contatore che conti quanti caratteri uguali ci sono*/
        int cont = 1;

        /*For che passa ogni lettera della stringa una alla volta*/
        for(i=0; i<DIM; i++)
        {
            /*If per verificare se la lettera [i] è uguale alla successiva ([i++])*/
            if(stringa[i] == stringa[i+1])
            {
                cont++; 
            } 
            else
            {
                /*Se la lettera [i] è diversa da quella succesiva stampo il contatore (cont) e la lettera [i]*/
                printf("%i%c", cont, stringa[i]);
                cont = 1;
            } 
        } 
    }
    else
    {
        printf("Il decoding e:\n");

        /*Inizializzo un contatore che conti quanti caratteri uguali ci sono*/
        int cont = 1;

        /*For che passa ogni lettera della stringa una alla volta*/
        for(i=0; i<DIM; i++)
        {
            
        }
    }
    return 0;  
}