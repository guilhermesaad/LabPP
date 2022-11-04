/*
 * Arquivo: fibonacci.c
 * Data criação: 04/nov/2022
 * Autor: Guilherme Saad
 * Calcula fibonacci em 1for
 */

#include <stdio.h>

int main(int argc, char *argv[]){

    int pos = 0;
    printf("Qual posicao da sequencia de Fibonacci deseja?\n");
    scanf("%d", &pos);

    int j = 1;
    int z = 0;

    for(int i=0; i<pos; i++){
        printf("%d, ", z);
        int t = z + j;
        z = j;
        j = t;
    }
    printf("...");


return 0;
}