/*
 * Arquivo: fibonacci.c
 * Data criação: 04/nov/2022
 * Autor: Guilherme Saad
 * Calcula fibonacci em 1for
 */

#include <stdio.h>

int main(int argc, char *argv[]){

    int num=0;
    scanf("%d",&num);

    for(int j=1, z=0, i=0, t=0; i<num; i++, t=z+j, z=j, j=t) printf("%d, ", z);
    
    printf("...");

return 0; 
}