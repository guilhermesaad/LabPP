/*
 * Arquivo: raizes2grau.c
 * Data criação: 12/jan/2023
 * Autor: Guilherme Saad
 * Calcula raizes de 2 grau
 */

#include <stdio.h>
#include <math.h>

int raizes(float a, float b, float c, double * x1, double * x2);
float delta(float a, float b, float c);

int main(){
    float a, b, c;
    int raiz;
    double x1[1] = {0};
    double x2[1] = {0};

    printf("Digite a, b e c:\n");
    scanf("%f %f %f%*c", &a, &b, &c);

    raiz = raizes(a, b, c, x1, x2);

    if(raiz == 2 && x1[0]<x2[0])
        printf("\n\n%d\nx1: %g\t\tx2: %g\n",raiz, x1[0], x2[0]);
    if(raiz == 2 && x1[0]>x2[0])
        printf("\n\n%d\nx1: %g\t\tx2: %g\n",raiz, x2[0], x1[0]);
    if(raiz == 1)
        printf("\n\n%d\nx1: %g\n",raiz, x1[0]);
    if(!raiz)
        printf("\n\n0\n");
    

return 0;
}

int raizes(float a, float b, float c, double * x1, double * x2){
    float Delta; 
    Delta = delta(a, b, c);
    if(Delta < 0)   return 0;
    if(Delta == 0){
        x1[0] = ((-1*b) - (sqrt(Delta))) / (2*a);
        return 1;
    }
    
    x1[0] = ((-1*b) - (sqrt(Delta))) / (2*a);
    x2[0] = ((-1*b) + (sqrt(Delta))) / (2*a);

return 2;
}

float delta(float a, float b, float c){
    return (( b * b ) - (4 * (a * c)));
}