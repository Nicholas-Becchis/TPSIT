/*Calcolare la somma degli elementi di posizione
pari e quelli di posizione dispari di un vettore*/

#include <stdio.h>
#include <stdlib.h>

/*funzione che calcola la somma dei numeri nelle celle pari*/
int somma_pari (int vet[], int lung)
{
    int sommap;
    for(int i = 1; i < lung; i = i+2)
    {
        sommap = sommap + vet[i];
    }
    return sommap;
}

/*funzione che calcola la somma dei numeri nelle celle dispari*/
int somma_disp (int vet[], int lung)
{
    int sommad;
    for(int j = 0; j < lung; j = j+2)
    {
        sommad = sommad + vet[j];
    }
    return sommad;
}

int main ()
{
    int lung;
    printf("Inserire la lunghezza del vettore: ");
    scanf("%d", &lung);
    int vet[lung];

    for(int k = 0; k < lung; k++)
    {
        printf("Inserire i valori del vettore:\n");
        scanf("%d", &vet[k]);
    }

    printf("Somma degli elemti pari: ", somma_pari(vet[], lung));

    printf("Somma degli elemti dispari: ", somma_disp(vet[], lung));
}

