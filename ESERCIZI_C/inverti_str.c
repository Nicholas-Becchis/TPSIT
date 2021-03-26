/*Data una stringa letta da tastiera (può contenere spazi),
(con elemento tappo\0) creare la stringa con i caratteri invertiti*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inverti(char stringa[])
{
    int lung;
    int lung1;
    lung1 = lung - 1; /*la lunghezza del vettore contiene anche il carattere finale "\0" che non inverto*/ 
    char *a;

    for(int i = 0; i < lung1/2; i++)
    {
        a = stringa[i];
        stringa[i] = stringa[lung1-i];
        stringa[lung1-i] = a;
    }
}

int main()
{
    int lung, lung1;
    char stringa[lung];

    printf("Inserire la lunghezza della stringa da invertire: ");
    scanf("%d", &lung);
    lung1 = lung - 1;

    for(int j = 0; j < lung1; j++)
    {
        scanf("%c", &stringa[j]);
    }

    printf("stringa di partenza: %s", stringa[lung]);
}