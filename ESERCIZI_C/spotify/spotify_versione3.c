#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX 100

typedef struct s_canzone{
	int  num;
	char nome[20];
	char autore[20];
	bool rip;
	struct s_canzone *next;
} canzone;

void push(canzone *head, int a, char *string_1, char *string_2){
    canzone *vet = head;
    while(vet->next != NULL){
        vet = vet->next;
    }
    vet->next = (canzone*)malloc(sizeof(canzone));
    vet->next->num = a;
    strcpy(vet->next->nome, string_1);
    strcpy(vet->next->autore, string_2);
    vet->next->autore[strlen(vet->next->autore)-1] = '\0';
    vet->next->next = NULL;

}

void Memorizzazione(canzone* Playlist, FILE* ptr);
void RiproduzioneCasuale(canzone* Playlist);

int main()
{
    canzone *head;
    head = (canzone*)malloc(sizeof(canzone));
    FILE *ptr;
    ptr=fopen("playlist.csv", "r");
    if (ptr){
            printf("file ok!\n");
            Memorizzazione(head,ptr);
            RiproduzioneCasuale(head);
            fclose(ptr);
    }
    else {
        printf("errore nell'apertura del file!");
    }
    return 0;

}
void Memorizzazione(canzone head, FILE ptr){
            int i = 0;
            int a = 0;
            char vet[MAX];
            char string_11[MAX];
            char string_2[MAX];
            const char *c = ",";
            char *field;
        while (fgets(vet,MAX,ptr)){
            if (i==0){
                field = strtok(vet, c);
                head->num = atoi(field);

                field = strtok(NULL, c);
                strcpy(head->nome, field);

                field = strtok(NULL, c);
                strcpy(head->autore, field);
                head->autore[strlen(head->autore)-1] = '\0';

                i=1;
            }
            else {
                field = strtok(vet, c);
                a = atoi(field);

                field = strtok(NULL, c);
                strcpy(string_1, field);

                field = strtok(NULL, c);
                strcpy(string_2,field);

                push(head, a, string_1, string_2);

            }
        }

    }

    void RiproduzioneCasuale(canzone *head){
        int k,n,w=0;
        canzone *vet;
        srand(time(NULL));
        printf("\n");
        printf("riproduzione\n");
        vet=head;
        while(vet!=NULL){
            vet->rip=false;
            vet=vet->next;
        }
        for (k=0;k<10;k++){
            do {
                w=0;
                vet=head;
                n = rand() % 10;
                    while(w<n){
                    vet=vet->next;
                    w++;
                    }
            }
            while(vet->rip==true);
            printf("titolo: %s, autore: %s\n", vet->nome, vet->autore);
            vet->rip=true;
        }
    }

