/*
 * Arquivo: malabarista.c
 * Data criação: 12/jan/2023
 * Autor: Guilherme Saad
 * XXXXXXXXXXXX
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef 
    long long int
llint;

llint malabarista(llint a);
llint minimo(llint * v, int n);
llint maximo(llint * v, int n);
double media(llint * v, int n);

int main(void) {
    llint * vetor;
    int n; llint a0;
    printf("Quantos elementos no vetor: ");
    scanf("%d", &n);
    printf("Qual elemento inicial: ");
    scanf("%lld", &a0);
    vetor = (llint *) malloc(n*sizeof(llint));
    vetor[0] = a0;
    for(int i = 1; i < n; i++)
        vetor[i] = malabarista(vetor[i-1]);
    printf("mínimo: %lld\nmáximo: %lld\nmédia: %lg\n",
        minimo(vetor, n), maximo(vetor, n), media(vetor, n));
    free(vetor);
    return 0;
}

llint malabarista(llint a) {
    return (llint) floor(sqrt((a % 2 == 0)? a : a*a*a));
}

llint minimo(llint * v, int n) {
    llint m = v[0];
    for(int i = 1; i < n; i++)
        if(v[i] < m) m = v[i];
    return m;
}

llint maximo(llint * v, int n) {
    llint m = v[0];
    for(int i = 1; i < n; i++)
        if(v[i] > m) m = v[i];
    return m;
}

double media(llint * v, int n) {
    llint m = 0;
    for(int i = 0; i < n; i++)
        m += v[i];
    return ((double) m)/n;
}