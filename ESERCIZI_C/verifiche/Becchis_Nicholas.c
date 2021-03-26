#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CARTE 52


typedef struct nodo{     //nodo equivale ad una carta
    int val;
    char c;    
    Nodo* next;
}Nodo;

int is_empty(Nodo *head){  //Viene verificato che la lista sia vuota
    if (head == NULL){
        return 1;
    }
    else {
        return 0;
    }
}

void enqueue (Nodo **head, Nodo **tail,  Nodo *elemento){   //inserimento nella coda della carta
    if(is_empty(*head)){
        *head = elemento;
    }
    else{
        *tail->next = elemento;
    }
    *tail = elemento;
    elemento->next = NULL;

}

Nodo* dequeue(Nodo **head,Nodo **tail,Nodo *elemento){   //funzione per estrarre dalla coda la carta
    Nodo* ris = *head;
    if (is_empty(*head)){
        return NULL;
    }else{
        *head = ris->next;  
    }
    if(*head == NULL){
        *tail = NULL;
    }
    
    return ris;
}



char Seme(int k){      //settiamo il tipo di seme
    char c;
    if(k < 13){             
        c = 'C';
    }
    if(k >= 14 && k < 26){
        c = 'P';
    }
    if(k >= 26 && k < 39){
        c = 'D';
    }
    else if (k >= 39)
    {
        c = 'F';
    }

    return c;
}

int main(){
    Nodo* head;
    Nodo* tail;
    Nodo* valore;
    char c;
    int k = 0;    //contatore delle carte
    head = NULL;
    tail = NULL;

    while(k < CARTE){
        c = Seme(k);
        head = (Nodo*)malloc(sizeof(Nodo));
        tail = (Nodo*)malloc(sizeof(Nodo));

        for(int i = 1; i < 14; i++){
            valore = (Nodo*)malloc(sizeof(Nodo));
            valore->val = i;
            valore->seme = c;
            enqueue(&head, &tail, valore);
        }
    }
}