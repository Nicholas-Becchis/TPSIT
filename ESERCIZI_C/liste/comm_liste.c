#include <stdio.h>
#include <stdlib.h>

struct El
{
    int valore;
    struct El* next;
};

int main()
{
    int n;
    struct El* lista;
    struct El* l;
    lista=NULL; /*La lista risulta vuota, l'head è inizializzata a NULL*/

    do
    {
        printf("Inserisci un naturale o -1 per terminare\n");
        scanf("%d",&n);
        if (n>=0)
        {
            if (lista==NULL) /*Se la lista è vuota si verificano le condizioni*/
            {
            /*Se la lista è vuota il programma crea il primo elemento (head)*/

            lista = (struct El*) malloc(sizeof(struct El));

            l = lista;
            }
            else /*Se la lista non è vuota si passa nel ramo else, basta che ci sia anche solo un elemento*/
            {
                /*dentro ad un nuovo nodo ci inseririsce un intero e lo fa puntare da qello precedente*/

                l->next = (struct El*) malloc(sizeof(struct El));

                l = l->next;
            }
            l->valore = n; /*Il valore del nodo diventa n*/
            l->next = NULL; /*viene impostato next con valore null*/
        }
    } while (n>=0);

    l=lista; /*l punta a head*/
    printf("numeri inseriti: ");
    while (l!=NULL)
    {
        printf("%d - %p \n",l->valore, l->next);
        l=l->next; /*stampa il primo nodo e poi punta al nodo successivo*/
    }
    printf("\n");
    return 0;
}