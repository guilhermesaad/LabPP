/*
 * Arquivo: fatorial.c
 * Data criação: 03/nov/2022
 * Autor: Guilherme Saad
 * Fatorial
 */

#include <stdio.h>

long fatorial(long X);

int main(int argc, char *argv[]){
    long int n = 0;

    printf("Digite um numero inteiro maior que 1: \n");
    scanf("%ld", &n);

    
    printf("%ld! = %ld",n, fatorial(n));

return 0;
}

long fatorial(long X){
    if(X == 0){
        return 1.0;
    }

    return X*fatorial(X-1);
}