/*
 * Arquivo: mfinal.c
 * Data criação: 27/jan/2023
 * Autor: Guilherme Saad
 * Manipulação de estrutura de dados tipo pilha e fila.
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef
    struct NodeS {
        int dado;
        struct NodeS * next;
    }
NodeS; // Stack (pilha)

typedef
    struct NodeQ {
        char dado;
        struct NodeQ * next;
    }
NodeQ; // Queue (fila)

typedef
    NodeS *
Stack;

typedef
    NodeQ *
Queue;

size_t stack_size(Stack pilha);                 // lenght
bool stack_isEmpty(Stack pilha);                //
void stack_push(Stack * ppilha, int dado);      // addFront OK
int stack_pop(Stack * ppilha);                  // delFront
int stack_peek(Stack pilha);                    //
size_t queue_size(Queue fila);                  // lenght
bool queue_isEmpty(Queue fila);                 //
void queue_enqueue(Queue * pfila, char dado);   // addFront OK
char queue_dequeue(Queue * pfila);              // delBack

int main(void) {
    Stack pilha = NULL;
    Queue fila = NULL;
    int elem_pilha; 
    int dados_pilha[] = {21, 33, 1, 42};
    char elem_fila; 
    char dados_fila[] = {'a', 'c', '*', 'z', '!', 'k'};

    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : "ok",
        queue_isEmpty(fila)? "vazia" : "ok");

    printf("Enchendo pilha: ");
    for(int i = 0; i < 4; i++) {
        stack_push(&pilha, dados_pilha[i]);
        printf("%d ", dados_pilha[i]);
    }
    printf("\n");
    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : "ok",
        queue_isEmpty(fila)? "vazia" : "ok");


    printf("Enchendo fila: ");
    for(int i = 0; i < 6; i++) {
        queue_enqueue(&fila, dados_fila[i]);
        printf("%c ", dados_fila[i]);
    }
    printf("\n");
    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : "ok",
        queue_isEmpty(fila)? "vazia" : "ok");

    printf("Tamanho da pilha: %zu elementos\n", stack_size(pilha));

    if(!stack_isEmpty(pilha)) {
        printf("Topo da pilha: %d\n", stack_peek(pilha));
        printf("Esvaziando pilha: ");
        while(!stack_isEmpty(pilha)) {
            elem_pilha = stack_pop(&pilha);
            printf("%d ", elem_pilha);
        }
    }
    printf("\n");

    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : "ok",
        queue_isEmpty(fila)? "vazia" : "ok");
    printf("Tamanho da fila: %zu elementos\n", queue_size(fila));

    if(!queue_isEmpty(fila)) {
        printf("Esvaziando fila: ");
        while(!queue_isEmpty(fila)) {
            elem_fila = queue_dequeue(&fila);
            printf("%c ", elem_fila);
        }
        printf("\n");
    }
    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : "ok",
        queue_isEmpty(fila)? "vazia" : "ok"); 

return 0;
}

void stack_push(NodeS ** ppilha, int elemento){    //bola -> primeiro, info -> elemento, 
    NodeS * new = (NodeS *) malloc(sizeof(NodeS));
    (*new).dado = elemento;
    (*new).next = *ppilha;
    *ppilha = new;
}

void queue_enqueue(NodeQ ** pfila, char elemento){
    NodeQ * new = (NodeQ *) malloc(sizeof(NodeQ));
    (*new).dado = elemento;
    (*new).next = *pfila;
    *pfila = new;
}

int stack_pop(NodeS ** ppilha){
    NodeS * aux = *ppilha;
    int el = aux -> dado;
    *ppilha = (*ppilha)->next;
    free(aux);
    return el;
}

char queue_dequeue(NodeQ ** pfila){
    NodeQ* aux = *pfila;
    if(!aux)  return ' ';
    if(!(aux->next)){
        *pfila = NULL;
        char elemento = aux -> dado;
        free(aux);
        return elemento;
    }
    while(aux->next->next)    aux = aux->next;
    char elemento = aux -> next ->dado;
    free(aux->next);
    aux->next = NULL;
    return elemento;

}

int stack_peek(Stack pilha){
    NodeS * aux = pilha;
    return (aux -> dado);
}

size_t stack_size(Stack pilha){
    int len = 0;
    for(NodeS * it = pilha; it; it = (*it).next)
        len = len + 1;
    return len;
}

size_t queue_size(Queue fila){
    int len = 0;
    for(NodeQ * it = fila; it; it = (*it).next)
        len = len + 1;
    return len;
}

bool stack_isEmpty(Stack pilha){
    if(stack_size(pilha))
        return false;
    return true;
}

bool queue_isEmpty(Queue fila){
    if(queue_size(fila))
        return false;
    return true;
}