/*
 * Arquivo: remNegativos.c
 * Data criação: 01/dez/2022
 * Autor: Guilherme Saad
 * "Tira" negativos do vetor
 */

#include <stdio.h>

int main(){

    int n, tam = 0;
    int count = 0;
    printf("Digite a quantidade de numeros que vao estar dentro do seu vetor\n");
    scanf("%d", &n);
    int vetor[n];


    for(int i=0; i < n; i++) {
        printf("Seu %d numero:\t", i+1);
        scanf("%d", vetor+i);  
        if(vetor[i]>= 0)
            count += 1;
    }


    int res[count];
    tam = count;

    if(!count){
        printf("vazio\n");
    }
    else{
        count = 0;
        for(int i=0; i < n; i++) {
            if(vetor[i]>=0){
                res[count] = vetor[i];
                count += 1;
            }
        }
    }

    for(int i=0; i < tam; i++) {
        if(i+1 == tam){
            printf("%d\n ", res[i]);
            break;
        }
        printf("%d, ", res[i]);
    }
    


return 0;
}

