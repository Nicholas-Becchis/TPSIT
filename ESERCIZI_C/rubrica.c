#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM_CONTATTI 1024

typedef struct contatto{
    int id;
    char nome[64];
    char numero[16];
}Contatto;

typedef struct rubrica{
    int num_inseriti;
    Contatto db[MAX_NUM_CONTATTI];
}Rubrica;

/*Crea un contatto nella rubrica puntata da r al primo posto disponibile con nome enumero specificati.
Ritorna zero in caso di successo, -1 nel caso contrario.*/
int inserisci (Rubrica *r, char *nome, char *numero)
{
    Contatto *p;
    if(r->num_inseriti == MAX_NUM_CONTATTI)
    {
        printf("Rubrica piena");
        return -1;                  //errore
    }
    p = &r->db[r->num_inseriti];    //punta la prima area di memoria disponibile

    strcpy(p->nome, nome);          //copia il nome
    strcpy(p->numero, numero);      //copia il numero
    p->id = r->num_inseriti;        //assegno l'indice
    r->num_inseriti;                //aumenta numero contatti
    return 0;                       //tutto ok
}

/*Ritorna il puntatore al numero legato al nome.
Ritorna null se il nome non è presente in rubrica.*/
char *trova_numero_da_nome(Rubrica *r, char *nome)
{
    int i;
    Contatto *p;

    for(i=0; i<MAX_NUM_CONTATTI; i++)
    {
        if(i == r->num_inseriti)
            break;              //STOP se abbiamo raggiunto l'ultimo

        p = &r->db[i];          //punta l'iesimo contatto

        if(strcmp(p->nome, nome))
            return p->numero;   //ritorna il numero se i nomi coincidono
    }
    return NULL;
}

void stampa_rubrica(Rubrica *r)
{
    int i;
    Contatto *p;

    printf("\nStampa rubrica: %d contatti\n", r->num_inseriti);

    for(i=0; i<MAX_NUM_CONTATTI; i++)
    {
        if(i == r->num_inseriti)
            break;              //STOP se abbiamo raggiunto l'ultimo
        p = &r->db[i];          //punto l'iesimo contatto

        printf("%s, %s\n", p->nome, p->numero);
    }
}

int main()
{
    int n_digitato;
    char* nome;
	char* numero;
	Rubrica r;
	Contatto *p;
    

    printf("Che azione si desidera eseguire?\n Digitare 1 per inserire un numero in rubrica\nDigitare 2 per cercare un numero in rubrica\nDigitare 3 per stampare tutta la rubrica\n");
    scanf("%d", &n_digitato);
    switch(n_digitato)
    {
        case 1:
            printf("Si desidera inserire un numero in rubrica\n");
            printf("Inserire il nome: ");
			scanf("%s", nome);
			printf("\nInserire il numero di telefono: ");
			scanf("%s", numero);
			inserisci(&r, nome, numero);
			printf("\nE' stato inserito un nuovo numero");
            break;

        case 2:
            printf("Si desidera cercare un numero in rubrica\n");
            printf("Inserire il nome che si desidera cercare: ");
            scanf("%s\n", nome);
            trova_numero_da_nome(&r, nome);
            printf("Il numero di telefono di %s:", nome);
            printf("%s\n", p->numero);
            break;

        case 3:
            printf("Si desidera stampare l'intera rubrica");
            printf("\n");
            stampa_rubrica(&r);
            break;
    }
}
