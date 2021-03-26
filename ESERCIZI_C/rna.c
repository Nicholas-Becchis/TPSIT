#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contA = 0;
    int contG = 0;
    int contC = 0;
    int contT = 0;
    char a;

    FILE *pf;
    pf = fopen("rna.txt", "r");
    if ( pf == NULL)
    {
        printf ("Impossibile aprire il file");
    }
    else
    {
        printf ("File aperto correttamente");
        for(int i=0; i<30000; i++)
        {
            a = fgetc(pf);
            if(a=='a')
            {
                contA = contA + 1;;
            }
            else
            {
                if(a=='b')
                {
                    contG++;
                }
                else
                {
                    if(a=='c')
                    {
                        contC++;
                    }
                    else
                    {
                        contT++;
                    }

                }

            }

        }
        printf("Il numero di 'a' nel file e pari a: %d\n", contA);
        printf("Il numero di 'c' nel file e pari a: %d\n", contC);
        printf("Il numero di 'g' nel file e pari a: %d\n", contG);
        printf("Il numero di 't' nel file e pari a: %d\n", contT);
    }
    return 0;
}
