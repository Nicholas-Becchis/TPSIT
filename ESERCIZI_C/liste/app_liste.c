/*APPUNTI (non funzionante)*/
typedef struct queue_node
{
    int valore;
    queue_node* next;
}nodo;

int is_empty(nodo *head){  //verifica se la lista è vuota

    if(head == NULL) return 1;
    else return 0;
}

nodo* dequeue(nodo **head,nodo **tail,nodo *element){
    nodo *ret=*head;
    if (is_empty(*head))
        return NULL;
    else
        *head=ret->next  
    
    if(*head == NULL){
        *tail = NULL;
    }
    
    return ret;
}

void enqueue (nodo **head,struct nodo **tail, struct nodo *element){
    if(is_empty(*head)){
        *head = element;
    }
    else{
        *tail->next = element;
    }
    *tail = element;
    element->next = NULL;

int main(){
    nodo 
}