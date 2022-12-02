/*
 * Arquivo: minMax.c
 * Data criação: 01/dez/2022
 * Autor: Guilherme Saad
 * minimo e maximo algo parecido
 */
#include <stdio.h>

int main(){
    int n, max, min = 0;
    printf("Digite a quantidade de entradas que vc deseja\n");
    scanf("%d", &n);
    int vetor[n];

    for(int i=0; i < n; i++) {
        printf("Seu %d numero:\t", i+1);
        scanf("%d", vetor+i);   
    }

    max = vetor[0];
    min = vetor[0];



    for(int i=0; i < n; i++) {
    if(vetor[i] > max)
        max = vetor[i];
    
    if (vetor[i]< min)
        min = vetor[i]; 
    }
    
     for(int i=0; i < n; i++) {
        if(vetor[i] == max)
            printf("%d> ", max);
        if(vetor[i] == min)
            printf("%d< ", min);
        if(vetor[i] != max && vetor[i] != min)
            printf("%d ", vetor[i]);
    }

return 0;
}