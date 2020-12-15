#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

int main()
{
	int x[MAX];
	int num;
	int G;
	float contagiati = 1;
	float R;

	
	printf("Inserire il numero di alunni di una classe:\n");
	scanf_s("%d", &num);
	printf("Inserire l'indice di contagio(R):\n");
	scanf_s("%f", &R);
	printf("Nel giorno 0 ci sono %f contagiati\n", contagiati);
		
	G = 0;
	while (contagiati < num)
    {	
		contagiati = contagiati * R;
		x[G] = contagiati;
		if (x[G] > num)
		{
			printf("Nel giorno numero %d ci sono %d contagiati\n", G, num);
		}
		else
		{
			printf("Nel giorno numero %d ci sono %d contagiati \n", G, x[G]);
		}
			G = G++;
	}

	printf("Tutta la classe e' infettata, si sono contagiati in %d giorni\n", G);

	return 0;
}