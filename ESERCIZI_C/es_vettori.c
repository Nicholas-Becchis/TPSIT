#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[5] = {11, 34, 5, 89, 7};
    int *pi = vet;
    int offset = 3;

    /*4 righe di codice che fanno la stessa cosa*/
    vet[offset] = 88;
    *(vet + offset) = 88;
    pi[offset] = 88;
    *(pi + offset) = 88;

    /*stampa del vettore senza l'utilizzo di parentesi []*/
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *(pi+i));
    }
    /*fa la stessa cosa del for sopra*/
    for(pi=vet; pi<vet+5; pi++)
    {
        printf("%d\n", *pi);
    }
}