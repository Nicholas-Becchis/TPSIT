/*Raddoppiare le occorrenze delle vocali in una stringa (ciao->ciiaaoo) usare 2 stringhe*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int raddoppia (char stringa[])
{
    int lung;
    for(int i = 0; i < lung; i++)
    {
        if(stringa[i]=='a')
        {
            printf("%c%c", stringa[i], stringa[i]);
        }
        else
        {
            if(stringa[i]=='e')
            {
                printf("%c%c", stringa[i], stringa[i]);    
            }
            else
            {
                if(stringa[i]=='i')
                {
                    printf("%c%c", stringa[i], stringa[i]);    
                }
                else
                {
                    if(stringa[i]=='o')
                    {
                        printf("%c%c", stringa[i], stringa[i]);    
                    }
                    else
                    {
                        if(stringa[i]=='u')
                        {
                            printf("%c%c", stringa[i], stringa[i]);    
                        }
                        else
                        {
                            printf("%d", stringa[i]);
                        }
                        
                    }
                    

                }
                
            }
            
        }
        
    }
    return stringa[];
}

int main()
{
    int lung;
    char stringa[lung];

    printf("Inserire la lunghezza della stringa: ");
    scanf("%d", &lung);
    
    for(int j = 0; j < lung; j++)
    {
        scanf("%c", &stringa[j]);
    }
    raddoppia(&stringa[lung]);
    printf("%s", stringa[]);

}