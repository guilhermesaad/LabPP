/*
 * Arquivo: contaVogais.c
 * Data criação: 11/dez/2022
 * Autor: Guilherme Saad
 * Conta as Vogais de uma string
 */

#include <stdio.h>
#include <string.h>

int main () {
    char palavra[50];
    int letras, vogais = 0, i;
    printf("digite uma palavra: ");
    scanf("%s", &palavra);
    
    letras = strlen(palavra);

    for(i = 0; i<= letras; i++){
        switch(palavra[i]){
            case 'A': 
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
                vogais = vogais + 1;
                break;
        }
    }
    printf("Na palavra tinha %d vogais.\n", vogais);
return 0;
}