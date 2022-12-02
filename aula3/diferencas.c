/*
 * Arquivo: diferencas.c
 * Data criação: 01/dez/2022
 * Autor: Guilherme Saad
 * Programa q diminui um do outro e dps mostra o maior e menor (???)
 */

#include <stdio.h>

int main(){
    int n =0;
    
    printf("Digite a quantidade de numeros que vao estar dentro do seu vetor\n");
    scanf("%d", &n);

    float vetor[n];

    for(int i = 0; i < n; i++){
        printf("Seu %d numero:\t", i+1);
        scanf("%f", vetor + i); 
    }

    float vetor2[n-1];

    for(int i=0; i<n-1;i++){
        vetor2[i] = vetor[i+1] - vetor[i];
    }

    float min = vetor2[0];
    float max = vetor2[0];

    for(int i=0; i<n-1; i++){

        if(vetor2[i]>max)
            max = vetor2[i];
        if(vetor2[i]<min)
            min = vetor2[i];
    }

    for(int i=0; i<n-1; i++)
        printf("%g, ",  vetor2[i]);
    printf("\tmin: %g\t max: %g\n", min, max);

return 0;
}

    

