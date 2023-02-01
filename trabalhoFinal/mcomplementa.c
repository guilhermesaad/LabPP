typedef
    struct Stack {
        int capacity;
        NodeS * ptr;
    }
Stack;

typedef
    struct Queue {
        int capacity;
        NodeQ * ptr;
    }
Queue;

Stack stack_create(int cap);
size_t stack_size(Stack pilha);
bool stack_isEmpty(Stack pilha);
bool stack_isFull(Stack pilha);
bool stack_push(Stack * ppilha, int dado);
int stack_pop(Stack * ppilha);
int stack_peek(Stack pilha);
void stack_clear(Stack * ppilha);
Queue queue_create(int cap);
size_t queue_size(Queue fila);
bool queue_isEmpty(Queue fila);
bool queue_isFull(Queue fila);
bool queue_enqueue(Queue * pfila, char dado);
char queue_dequeue(Queue * pfila);
void queue_clear(Queue * pfila);

int main(void) {
    Stack pilha = stack_create(4);
    Queue fila = queue_create(6);
    int elem_pilha; 
    int dados_pilha[] = {21, 33, 1, 42, 25, 99, 121};
    char elem_fila; 
    char dados_fila[] = {'a', 'c', '*', 'z', '!', 'k', '@', 'u'};
    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : (stack_isFull(pilha)? "cheia" : "ok"),
        queue_isEmpty(fila)? "vazia" : (queue_isFull(fila)? "cheia" : "ok"));
    printf("Enchendo pilha: ");
    for(int i = 0; i < 7; i++) {
        printf(" %d", dados_pilha[i]);
        if(!stack_push(&pilha, dados_pilha[i])) printf("(falha)");
    }
    printf("\n");
    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : (stack_isFull(pilha)? "cheia" : "ok"),
        queue_isEmpty(fila)? "vazia" : (queue_isFull(fila)? "cheia" : "ok"));
    printf("Enchendo fila: ");
    for(int i = 0; i < 8; i++) {
        printf(" %c", dados_fila[i]);
        if(!queue_enqueue(&fila, dados_fila[i])) printf("(falha)");
    }
    printf("\n");
    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : (stack_isFull(pilha)? "cheia" : "ok"),
        queue_isEmpty(fila)? "vazia" : (queue_isFull(fila)? "cheia" : "ok"));
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
        stack_isEmpty(pilha)? "vazia" : (stack_isFull(pilha)? "cheia" : "ok"),
        queue_isEmpty(fila)? "vazia" : (queue_isFull(fila)? "cheia" : "ok"));
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
        stack_isEmpty(pilha)? "vazia" : (stack_isFull(pilha)? "cheia" : "ok"),
        queue_isEmpty(fila)? "vazia" : (queue_isFull(fila)? "cheia" : "ok"));
    printf("Enchendo pilha (incompleta): ");
    for(int i = 0; i < 3; i++) {
        printf(" %d", dados_pilha[i]);
        if(!stack_push(&pilha, dados_pilha[i])) printf("(falha)");
    }
    printf("\n");
    printf("Enchendo fila: ");
    for(int i = 0; i < 8; i++) {
        printf(" %c", dados_fila[i]);
        if(!queue_enqueue(&fila, dados_fila[i])) printf("(falha)");
    }
    printf("\n");
    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : (stack_isFull(pilha)? "cheia" : "ok"),
        queue_isEmpty(fila)? "vazia" : (queue_isFull(fila)? "cheia" : "ok"));
    printf("Limpando pilha...\n");
    stack_clear(&pilha);
    printf("Limpando fila...\n");
    queue_clear(&fila);
    printf("\n> Pilha %s, fila %s\n",
        stack_isEmpty(pilha)? "vazia" : (stack_isFull(pilha)? "cheia" : "ok"),
        queue_isEmpty(fila)? "vazia" : (queue_isFull(fila)? "cheia" : "ok"));
    return 0; 
}