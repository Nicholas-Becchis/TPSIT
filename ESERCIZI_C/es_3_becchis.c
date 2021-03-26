#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vet[10];
    int i;

    printf("inserisci poi dai invio");
    for(i=0; i<10; i++)
    {
        scanf("%d", vet+i);
    }

    for(i=0; i<10; i++)
    {
        printf("%d", *(vet+i));
    }
}