/*
 * Arquivo: contaCaracteres.c
 * Data criação: 11/dez/2022
 * Autor: Guilherme Saad
 * Conta os caracteres de uma string
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    char frase[100]; frase[99] = '\0';
    int tamanhoFrase = 0;
    int numero = 0; int letra = 0; int resto = 0;
    
    printf("digite uma frase: ");
    fgets(frase, 100, stdin);

    tamanhoFrase = strlen(frase)-1;

    for(int i=0; tamanhoFrase>=i; i++){

        if(isalnum(frase[i])){

            if(isalpha(frase[i])){
                letra = letra + 1;
            }

            if(isdigit(frase[i])){
                numero = numero + 1;
            }
        }

        if(!isalnum(frase[i]))
            resto = resto + 1;
    }


    printf("letras %d\t", letra);
    printf("digitos %d\t", numero);
    printf("outros %d\t", resto);

return 0;
}