/*
 * Arquivo: fib.c
 * Data criação: 05/jan/2023
 * Autor: Guilherme Saad
 * Acha o fibonacci
 */
#include <stdio.h>

int fib(int indice);

int main(){
    int indiceFibonacci = 0;

    printf("Digite o indice da sequencia de fibonacci, que irei retornar o numero correspondente.\n");
    scanf("%d", &indiceFibonacci);

    printf("%d", fib(indiceFibonacci));

return 0;
}

int fib(int indice){
    if(indice == 0)
        return 0;

    if(indice == 1 || indice == 2)
        return 1;

    else{
        return fib(indice-1)+fib(indice-2);
    }
}