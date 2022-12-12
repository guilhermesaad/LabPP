/*
 * Arquivo: reverteString.c
 * Data criação: 11/dez/2022
 * Autor: Guilherme Saad
 * Reverte uma string
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char frase[100]; frase[99] = '\0';
    char fraseInvertida[100]; fraseInvertida[99] = '\0';
    
    int tamanhoFrase = 0;
    int count = 0;
    
    printf("digite uma frase: ");
    fgets(frase, 100, stdin);

    tamanhoFrase = strlen(frase)-1;
    count = tamanhoFrase;

    for(int i = 0; tamanhoFrase>=i; i++){
        fraseInvertida[i] = toupper(frase[count]);
        count --;
    }

    printf("%s", fraseInvertida);

return 0;
}