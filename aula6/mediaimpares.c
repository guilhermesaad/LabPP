/*
 * Arquivo: mediaimpares.c
 * Data criação: 12/jan/2023
 * Autor: Guilherme Saad
 * Calcula a média dos numeros impares
 */
#include <stdio.h>
#include <stdlib.h>
#define N 1024

typedef
    unsigned long long int
ulli;

ulli mediav(int n, int *vetor);
int impares(int n, int s, int *vetor);


int main(){
    int inicial_s, elementos_n, penultimo = 0;
    ulli media = 0.0;
    int * vetor;
    

    printf("Me de um numero n de elementos para o primeiro vetor:\n");
    scanf("%d%*c", &elementos_n);

    printf("Me de o numero inicial\n");
    scanf("%d%*c", &inicial_s);

    if(inicial_s%2)
        inicial_s--;

    vetor = malloc(elementos_n*sizeof(int));

    penultimo = impares(elementos_n, inicial_s, vetor);

    media = mediav(elementos_n, vetor);

    printf("%d\t%llu\n", penultimo, media);


    free(vetor);

return 0;
}

int impares(int n, int s, int *vetor){
    int i;
    s++;
    for (i= 0; i < n; i++, s+=2){
        vetor[i] = s;
    }
    return vetor[i-2];
}



ulli mediav(int n, int *vetor){
    ulli media = 0.0;
    for (int i = 0; i < n; i++){
        media = media + vetor[i];
    }
    return media/n;
}