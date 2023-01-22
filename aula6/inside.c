/*
 * Arquivo: inside.c
 * Data criação: 12/jan/2023
 * Autor: Guilherme Saad
 * Verifica se existe uma string dentro da outra
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tamanho 1024

int contem(char * string1, char * string2);
void getstr(char * str, long long int nchar);

int main(){
    char string1[tamanho];
    char string2[tamanho];
    int indice, tamanho1, tamanho2;

    printf("Digite uma string \n");
    getstr(string1, tamanho);
    printf("Digite sua outra string\n");
    getstr(string2, tamanho);

    indice = contem(string1, string2);

    tamanho1 = strlen(string1);
    tamanho2 = strlen(string2);

    if(indice >= 0){
        for (int i = 0; i < tamanho2; i++){
            if(i == indice)
                printf("*");

            printf("%c", string2[i]);

            if(i == indice + tamanho1 -1)
                printf("*");
        }
        if(indice + tamanho1 == tamanho2)
            printf("*");

        printf(" \n");
    }
    else
        printf("A segunda nn contem a primeira\n");

return 0;
}

int contem (char * string1, char * string2){
    int i, j;
    int tamanhoString1, tamanhoString2;
    tamanhoString1 = strlen(string1);
    tamanhoString2 = strlen(string2);

    for (i = 0; i < tamanhoString2; i++){
        if(string1[0] == string2[i]){

            for (j = 1; j < tamanhoString1; j++){
                if(i+j >= tamanhoString2)    return -1;
                if(string1[j] != string2[i+j])  break;
            }
            if(j == tamanhoString1) return i;   
        }
    }
    return -1;
}

void getstr(char * str, long long int nchar){
    char c;
    long long int i;
    for(i = 0; i < nchar && (c = getchar()) != '\n'; i++)
        str[i] = c;
    str[(i >= nchar) ? nchar - 1 : i] = '\0';
    if(i >= nchar) // precisa limpar o buffer do teclado
        while ((c = getchar()) != '\n' && c != EOF);
}