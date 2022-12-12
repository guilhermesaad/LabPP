/*
 * Arquivo: palindrono.c
 * Data criação: 11/dez/2022
 * Autor: Guilherme Saad
 * Verifica se é um palíndrono
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){


    char frase[100];
    char fraseInvertida[100]; 
    char fraseLimpa[100];
    
    int tamanhoFrase = 0;
    int tamanhoLimpo = 0;
    int count = 0;
    
    printf("digite uma frase: ");
    fgets(frase, 100, stdin);

////////////////////////////////////////////////////

    tamanhoFrase = strlen(frase)-1;

    count = tamanhoFrase;
    for(int i = 0; tamanhoFrase>=i; i++){
        fraseInvertida[i] = toupper(frase[count]);
        count --;
    }
    fraseInvertida[tamanhoFrase+1] = '\0';
    

////////////////////////////////////////////////////

    count = 0;
    for(int i = 0; tamanhoFrase>=i; i++){
        if(isalnum(fraseInvertida[i])){
            fraseLimpa[count] = fraseInvertida[i];
            count++;
        }
    }    
    

    fraseLimpa[count] = '\0';
    
    tamanhoLimpo = count-1;
////////////////////////////////////////////////////
    
    count = 0;
    for(int i = 0; (tamanhoLimpo/2)>=i; i++){
        if(fraseLimpa[i] != fraseLimpa[tamanhoLimpo-i]){
            printf("Palindrono: Falso\n");
            count = 1;
            break;
        }

    }
    if(count != 1)
        printf("Palindrono: Verdadeiro\n");


return 0;
}