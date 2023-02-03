

#include <stdio.h>
#include <stdlib.h>

typedef
    int
Type; // mudar Node_print quando mudar Type

typedef
    struct Node {
        Type info;
        struct Node * next;
    }
Node;

void Node_print(Node * bola); // mudar quando mudar Type
void Node_addFront(Node ** bola, Type info); // push / enqueue
void Node_addBack(Node ** bola, Type info);  // append
void Node_insert(Node ** bola, Type info, int indice);
Node * Node_Index(Node * bola, int indice);
int Node_length(Node * bola);
void Node_delFront(Node ** bola); // pop
void Node_delBack(Node ** bola);  // dequeue
void Node_delete(Node ** bola, int indice);
void Node_clear(Node ** bola);

char Node_delBack2(Node ** p);

int main(void) {
    Node * lista = NULL;
    int numero_deletado = 0;
    Node_print(lista);
    Node_addFront(&lista, '3');
    Node_addFront(&lista, '4');
    Node_addFront(&lista, '5');
    Node_addBack(&lista, '3');
    Node_addBack(&lista, '4');
    Node_addBack(&lista, '5');
    Node_print(lista);
    Node * idx = Node_Index(lista, 0);
    if(idx)
        printf("%p, %d\n", idx, idx->info);
    Node_delFront(&lista);

    Node_delBack(&lista);
    printf("numero deletado: %d\n", Node_delBack2(&lista));

    numero_deletado = Node_delBack2(&lista);
    printf("O numero deletado foi %d\n", numero_deletado);

    Node_insert(&lista, 8, 2);
    Node_print(lista);
    Node_delete(&lista, 2);
    Node_print(lista);
    Node_clear(&lista);
    Node_print(lista);
    return 0;
}

void Node_print(Node * bola) {
    for(Node * it = bola; it; it = (*it).next)
        printf("%d ", (*it).info);
    printf("\n");
}

void Node_addFront(Node ** bola, Type info) {
    Node * new = (Node *) malloc(sizeof(Node));
    (*new).info = info;
    (*new).next = *bola;
    *bola = new;
}

void Node_addBack(Node ** bola, Type info) {
    Node * new = (Node *) malloc(sizeof(Node));
    Node * last;
    new->info = info; // (*new).info == new->info
    (*new).next = NULL;
    for(Node * it = *bola; it; it = (*it).next)
        last = it;
    (*last).next = new;
}

Node * Node_Index(Node * bola, int indice) {
    for(Node * it = bola; it; it = (*it).next) {
        if(indice == 0) return it;
        indice--;
    }
    return NULL;
}

int Node_length(Node * bola) {
    int len = 0;
    for(Node * it = bola; it; it = (*it).next)
        len += 1;
    return len;
}

void Node_insert(Node ** bola, Type info, int indice) {
    if(indice == 0)
        Node_addFront(bola, info);
    if(indice == Node_length(*bola))
        Node_addBack(bola, info);
    if(indice > 0 && indice < Node_length(*bola)) {
        Node * a = Node_Index(*bola, indice-1);
        Node * b = Node_Index(*bola, indice);
        Node * new = (Node *) malloc(sizeof(Node));
        new->info = info;
        new->next = b;
        a->next = new;
    }
}

void Node_delFront(Node ** bola) {
    Node * aux = *bola;
    *bola = (*bola)->next;
    free(aux);
}

void Node_delBack(Node ** bola) {
    Node * penultimo = *bola;
    for(Node * it = *bola; it->next; it = it->next){
        if(it->next)
            if(!(it->next)->next)
                penultimo = it;
    }
    if(penultimo->next){

        free(penultimo->next);
        penultimo->next = NULL;
    } else {
        free(penultimo);
        *bola = NULL;
    }
}

char Node_delBack2(Node ** p){
    Node* q = *p;
    if(!q)  return '\0';

    if(!(q->next)){
        *p = NULL;
        char el = q -> info;
        free(q);
        return el;
    }
    while(q->next->next)    q = q->next;
    char el = q -> next -> info;
    free(q->next);
    q->next = NULL;
    return el;

}

void Node_delete(Node ** bola, int indice) {
    if(indice == 0)
        Node_delFront(bola);
    if(indice == Node_length(*bola)-1)
        Node_delBack(bola);
    if(indice > 0 && indice < Node_length(*bola)-1) {
        Node * a = Node_Index(*bola, indice-1);
        Node * b = Node_Index(*bola, indice+1);
        free(a->next);
        a->next = b;
    }
}

void Node_clear(Node ** bola) {
    while(*bola)
        Node_delFront(bola);
}