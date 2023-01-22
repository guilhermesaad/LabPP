/*
 * Arquivo: txtFibonacci.c
 * Data criação: 22/jan/2023
 * Autor: Guilherme Saad
 * Cria arquivo txt com sequencia de fibonacci impressa.
 */

#include <stdio.h>

int main(){

    int aux, num, z = 0;
    int t = 0;
    FILE * fib;

    printf("Digite o indice da sequencia de fibonacci:\n");
    scanf("%d%*c", &num);

    fib = fopen("fibonacci.txt", "w");

    for(int j=1, i=0, t=0; i<num; i++, t=z+j, z=j, j=t){
        fprintf(fib, "%d\n", z);

        if(i+1==num)
            printf("Maior numero:%d\n", z);
    }
    fclose(fib);
    
return 0;
}