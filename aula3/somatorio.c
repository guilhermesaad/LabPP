/*
 * Arquivo: produtorio.c
 * Data criação: 01/dez/2022
 * Autor: Guilherme Saad
 * Soma de todos os elementos!!
 */

#include <stdio.h>

int main(){
    int n = 0;
    printf("Digite a quantidade de numeros q vc deseja somar\n");
    scanf("%d", &n);
    float vetor[n];
    float resposta = 0.0;

    for(int i=0; i < n; i++) {
        printf("Seu %d numero:\t", i+1);
        scanf("%f", vetor+i);   
    }

    for(int i=0; i < n; i++) {
        printf("%g ", vetor[i]);
        if(!(n-1==i))
            printf("+ ");
        resposta += vetor[i];
        
    }

    printf("= %g", resposta);


return 0;
}