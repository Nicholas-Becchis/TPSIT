/*Dato un numero n stabilire se è primo*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    FILE *pf;
    pf = fopen("n_primi.txt", "r");

    /*verifico che l'apertura del file sia andata a buon fine*/
    if (pf == NULL)
    {
        printf("apertura errata\n");
        return -1;
    }
    else
    {
        fscanf(pf, "%d", &numero);
        printf("numero: %d\n", numero);

        /*calcolo dei numeri primi*/
        for(int i=2; i<numero; i++)
        {
            int resto = numero % i;
            if(resto = 0)
            {
                printf("%d non è un numero primo. Aprire il file e cambiare numero\n");
            }
        }
    }
}
