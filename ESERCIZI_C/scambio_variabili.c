#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

    printf("stringa di partenza: %c", stringa[lung]);
}
