#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct nodo{  
    char valore;
    struct nodo* next;
    }Nodo;

void push(Nodo **head, Nodo* elemento){ 
    if(is_empty(*head)){
        *head = elemento;
        elemento->next = NULL;
    }
    else
    {
        elemento->next = *head;
    }
    
}

int is_empty(Nodo *head){
    if (head == NULL){
        return 1;
    }
    else {
        return 0;
    }
}

Nodo* pop(Nodo **head){   
    Nodo* ret = *head;
    if(is_empty(*head)){
        return NULL;
    }
    else{
        *head = ret->next;
    }
    return ret;
}

int main(){
    Nodo* elemento;
    Nodo* out;
    Nodo* pila = NULL;
    char string[MAX];

    pila=(Nodo* )malloc(sizeof(Nodo));
    elemento=(Nodo* )malloc(sizeof(Nodo));
    out=(Nodo* )malloc(sizeof(Nodo));

    printf("inserire un numero: ");
    scanf("%s", string);

    int n = strlen(string);
    
    for(int j = 0;j < n; j++){
        printf("entrato\n");
        elemento->valore = string[j];
        push(&pila,elemento);
    }

    for(int j = 0;j < n; j++){
        printf("entrato2\n");
        out = pop(&pila);
        printf("%c", out->valore);
        
    }

}