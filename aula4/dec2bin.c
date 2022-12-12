/*
 * Arquivo: dec2bin.c
 * Data criação: 11/dez/2022
 * Autor: Guilherme Saad
 * Converte decimal para binário
 */

#include <stdio.h>
#define MAX 1025

int main(){
    
    int i = 0; int count = 0;
    unsigned long long int numeroDecimal;
    char vetorNumeroBinario[MAX];
    vetorNumeroBinario[MAX-1] = '\0';

    printf("Digite seu numero em base decimal:\n");
    scanf("%llu", &numeroDecimal);

    printf("Seu numero em binario e:\n");

    while(numeroDecimal > 0)
        {
            vetorNumeroBinario[i] = numeroDecimal % 2;
            i++; count++;
            numeroDecimal = numeroDecimal / 2;
            
        }

    while(count>0){
      count -= 1;
        printf("%d", vetorNumeroBinario[count]);
    }


return 0;
}
