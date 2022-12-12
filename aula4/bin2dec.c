/*
 * Arquivo: bin2dec.c
 * Data criação: 11/dez/2022
 * Autor: Guilherme Saad
 * Converte binário para decimal
 */
#define MAX 65

#include <stdio.h>
#include <string.h>

int main(){
    unsigned int algarismo = 0;
    unsigned int resultado = 0;
    int tamanhoNumeroBinario, i = 0;
    char numeroBinario[MAX]; numeroBinario[MAX-1]='\0';

    printf("Me de um numero em binario de no maximo 64 bits\n");
    fgets(numeroBinario, 65, stdin);

    tamanhoNumeroBinario = strlen(numeroBinario)-2;

    while(tamanhoNumeroBinario >= 0){
        algarismo = numeroBinario[i]-'0';
        resultado = ((algarismo)<<tamanhoNumeroBinario) + resultado;
        i++;    tamanhoNumeroBinario--;
    }

    printf("%u\n", resultado);

return 0;
}