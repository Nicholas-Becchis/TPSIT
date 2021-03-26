#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

#define MAX 100

typedef struct canzone{
	int  n;
	char nome_canzone[20];
	char autore[20];
	bool ripetizione;
} canzone;

void Memoria(canzone* Playlist, FILE* pf);
void Random(canzone* Playlist);

int main()
{
    canzone Playlist[MAX];
    FILE *pf;
    pf=fopen("spotify.csv", "r");
    if (pf)
    {
        printf("file aperto\n");
        Memoria(Playlist,pf);
        Random(Playlist);

        fclose(pf);
    }
    else
    {
        printf("Il file non si apre");
    }
}
void Memoria(canzone* Playlist, FILE* pf){
            int i = 0;
            char vet[MAX];
            const char *c = ",";
            char *field;
            while (fgets(vet,MAX,pf)){

            field = strtok(vet, c);

            Playlist[i].n = atoi(field);
            printf("numero: %d\n",Playlist[i].n);


            strcpy(Playlist[i].nome_canzone, strtok(NULL, c));
            printf("titolo: %s\n",Playlist[i].nome_canzone);

            strcpy(Playlist[i].autore, strtok(NULL, c));
            Playlist[i].autore[strlen(Playlist[i].autore)-1] = '\0';
            printf("autore: %s\n",Playlist[i].autore);

            i++;
            }

    }

    void Random(canzone *Playlist){
        int j,k,w=0;
        srand(time(NULL));
        printf("\n");
        printf("riproduzione\n");
        for (w=0;w<10;w++){
            Playlist[w].ripetizione=false;
        }
        for (j=0;j<10;j++){
            do {
            k = rand() % 10;
            }
            while(Playlist[k].ripetizione==true);
            printf("titolo: %s, autore: %s\n", Playlist[k].nome_canzone, Playlist[k].autore);
            Playlist[k].ripetizione=true;

        }
    }