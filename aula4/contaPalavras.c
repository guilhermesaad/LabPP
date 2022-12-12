/*
 * Arquivo: contaPalavras.c
 * Data criação: 11/dez/2022
 * Autor: Guilherme Saad
 * Conta as palavras de uma string
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
    char frase[100];
    char fraseLimpa[100];
        
    int tamanhoFrase;
    int tamanhoLimpo;
    int count;
    int boolean = 0;
    int numeroDePalavras = 1;

    printf("digite uma frase: \n");
    fgets(frase, 100, stdin);

    tamanhoFrase = strlen(frase) -1;            // Lendo a frase.


    count = 0;
    for(int i = 0; tamanhoFrase>=i; i++){       // Limpando ... 
        if(isalnum(frase[i]) || frase[i] == 32){
            fraseLimpa[count] = frase[i];
            count++;
        }
    } 

    fraseLimpa[count] = '\0';
    tamanhoLimpo = count-1;

    for(int i=0; tamanhoLimpo-1>= i; i++){
        if(isalnum(fraseLimpa[i]))
            boolean = 1;
        
        
        if(isalnum(fraseLimpa[i]) && fraseLimpa[i+1] == 32)

            numeroDePalavras ++;

    }
    if(boolean)
        printf("Na sua frase haviam %d palavras\n", numeroDePalavras);
    else
        printf("Na sua frase haviam 0 palavras\n", numeroDePalavras);

return 0;
}