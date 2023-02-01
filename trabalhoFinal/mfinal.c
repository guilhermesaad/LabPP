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
    NodeS *
Stack;

typedef
    NodeQ *
Queue;

size_t stack_size(Stack pilha);                 // lenght
bool stack_isEmpty(Stack pilha);                //
void stack_push(Stack * ppilha, int dado);      // addFront
int stack_pop(Stack * ppilha);                  // delFront
int stack_peek(Stack pilha);                    //
size_t queue_size(Queue fila);                  // lenght
bool queue_isEmpty(Queue fila);                 //
void queue_enqueue(Queue * pfila, char dado);   // addFront
char queue_dequeue(Queue * pfila);              // delFront

int main(void) {
    Stack pilha;
    Queue fila;
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


