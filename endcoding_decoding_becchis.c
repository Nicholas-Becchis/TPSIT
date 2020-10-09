#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*Dichiaro la dimensione della stringa come variabile, poi la chiedo all'utente*/
    int DIM, i;
    printf("Inserire il valore della stringa\n");
    scanf("%c", &DIM);

    /*Inizializzo la stringa*/
    char stringa[DIM];

    /*Creo la stringa*/
    printf("Inserire la stringa:\n");
    scanf("%s", stringa);

    /*Dichiaro le due ariabili per poi chiedere all'utende quale delle due azioni uole effettuare*/
    char risp;      
    printf("Si vuole effettuare un'azione di endcoding (premere e) o decoding (premere d)?\n");
    scanf("%c", &risp);

    /*If per capire se bisogna effettuare un'azione di endcoding o decoding*/
    int e, d;
    if(risp = e)
    {
        printf("L'endcoding è:\n");

        /*Inizializzo un contatore che conti quanti caratteri uguali ci sono*/
        int cont = 1;

        /*For che passa ogni lettera della stringa una alla volta*/
        for(i=0; i<=DIM; i++)
        {
            /*If per verificare se la lettera [i] è uguale alla successiva ([i++])*/
            if(stringa[i] == stringa[i++])
            {
                cont = cont++; 
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
           
    }
    return 0;  
}