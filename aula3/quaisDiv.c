/*
 * Arquivo: remNegativos.c
 * Data criação: 01/dez/2022
 * Autor: Guilherme Saad
 * Responde se os numeros sao divisores ou nao
 */

#include <stdio.h>

int main(){

    int n, r = 0;
    printf("Quantos numeros vc quer??\n");
    scanf("%d", &n);

    int vetor[n];

    for(int i=0; i < n; i++) {
        printf("Seu %d numero:\t", i+1);
        
        scanf("%d", vetor+i);
    }

    printf("Digite o numero que vc quer verificar:\n");
    scanf("%d", &r);

    for(int i=0; i < n; i++) {
        if(r%vetor[i])
            printf("%d ", vetor[i]);
        if(!(r%vetor[i]))
            printf("%d# ", vetor[i]);
    }

return 0;
}