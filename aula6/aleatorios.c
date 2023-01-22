/*
 * Arquivo: aleatorios.c
 * Data criação: 12/jan/2023
 * Autor: Guilherme Saad
 * Informa maximo minimo e media de uma sequencia aleatoria
 */

#include <stdio.h>
#include <stdlib.h>

void preenche(int n, int *vetor);
double mediav(int n, int *vetor);
void maxmin(int n, int *vetor);

int main(){
    int n;
    int * vetor;
    double media;

    printf("digite um numero N de elementos:\n");
    scanf("%d%*c", &n);
    srand(n);
    vetor = malloc(n*sizeof(int));

    preenche(n, vetor);
    media = mediav(n, vetor);
    
    maxmin(n, vetor);
    printf("Media: %llf\n", media);

    free(vetor);
return 0;
}

void preenche(int n, int *vetor){
    for(int i = 0; i <= n; i++){
        vetor[i] = rand()%n;
    }

}

void maxmin(int n, int *vetor){
    double max, min;
    max = vetor[0];
    min = vetor[0];

    for (int i = 0; i < n; i++){
        if(vetor[i] > max){
            max = vetor[i];
        }
        if(vetor[i] < min){
            min = vetor[i];
        }
    }

    printf("Minimo: %llf\n", min);
    printf("Maximo: %llf\n", max);
    
}

double mediav(int n, int *vetor){
    double media = 0.0;
    for (int i = 0; i < n; i++){
        media = media + vetor[i];
    }
    return media/n;
}