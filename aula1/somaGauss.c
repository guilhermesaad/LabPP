/*
 * Arquivo: somaGauss.c
 * Data criação: 03/nov/2022
 * Autor: Guilherme Saad
 * Soma de Gauss
 */

#include <stdio.h>

int main(int argc, char *argv[]){
    int numero = 0;
    int aux = 0;

    printf("Fala um numero inteiro pfv. \n");
    scanf("%d", &numero);
    for(int i=1; i<=numero; i++){
        aux = aux + i;
        
        
    }
    printf("Resultado %d\n", aux);

return 0;
}