/*
 * Arquivo: aproxpi.c
 * Data criação: 05/jan/2023
 * Autor: Guilherme Saad
 * Aproximacao do numero pi usando a serie de Leibniz
 */

#include <stdio.h>
#include <math.h>

float aproximacao(double numero);

int main(){
    double numero = 0.0;
    printf("Digite o quao preciso voce quer o numero pi, quanto maior a entrada mais precisa a aproximacao.\n");
    scanf("%lf",&numero);

    printf("%f", aproximacao(numero));

return 0;
}

float aproximacao(double numero){

    if(!numero)  return 4;

    else
        return (aproximacao(numero-1) + 4*(pow(-1.0,numero)/2*numero+1));
    
}