#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Definire MAx
#define MAX 1000

int main()
{
    //Definisco le variabili
    int N;
    float R = 1.4;
    float A[MAX];
    printf("Inserire il numero di alunni ");
    scanf("%d", &N);

    //Inizializzo A[0]
    A[0] = 1;

    printf("Il giorno 0 c'è 1 contagiato");

    for(int i=1; i<MAX; i++)
    {
        //Calcolo il numero dei contagiati
        A[i] = (pow(R, i))*A[0]; //pow = elevamento a potenza, R elevato ad i

        printf("Nel giorno %d ho un numero di contagiati pari a %f n", i, (A[i]));

        //Verifico che il numero dei contagiati sia uguale o maggire ad N
        if (A[i] >= N)
        {
            printf("Per contagiare tutti gli studenti ci vogliono %d giorni\n", i);
            i=MAX;
        }
    }
    return 0;
}