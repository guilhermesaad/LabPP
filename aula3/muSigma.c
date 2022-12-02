/*
 * Arquivo: muSigma.c
 * Data criação: 01/dez/2022
 * Autor: Guilherme Saad
 * Calculando media e desvio padrao
 */

#include <stdio.h>
#include <math.h>

int main(){

    int n = 0;
    printf("Digite a quantidade de numeros q vc deseja trabalhar\n");
    scanf("%d", &n);
    float vetor[n];
    float media, desvio = 0.0;

    for(int i=0; i < n; i++) {
        printf("Seu %d numero:\t", i+1);
        scanf("%f", vetor+i);   
    }

    // Média:

    for(int i=0; i < n; i++) 
        media += vetor[i];
    media /= n;
    printf("media %g", media);


    // Desvio Padrão:

    for(int i=0; i < n; i++){

        desvio += (pow(vetor[i]-media, 2)) ;
    }
    desvio = sqrt(desvio/n);

     printf(" devio %g", desvio);






return 0;
}