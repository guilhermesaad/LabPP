/*
 * Arquivo: impares.c
 * Data criação: 24/nov/2022
 * Autor: Guilherme Saad
 * o numero é impar???
 */

#include <stdio.h>

#include <stdbool.h>

bool impar(int n);

int main(){
    int ini = 0;
    int fim = 0;
    int i = 0;

    printf("Digite seu intervalo (inicio e fim):\n");
    scanf("%d%d", &ini,&fim);

    for(i=ini; fim>i; i++){
        if(impar(i))
            printf("%d, ", i);
    }
return 0;
}

bool impar(int n){
    if(n%2)
        return true;
    return false;

}