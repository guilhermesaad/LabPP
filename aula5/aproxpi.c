/*
 * Arquivo: aproxpi.c
 * Data criação: 05/jan/2023
 * Autor: Guilherme Saad
 * Aproximacao do numero pi usando a serie de Leibniz
 */

#include <stdio.h>
#include <math.h>

long double aproximacao(double numero);

int main(){
    double numero = 0.0;
    printf("Digite o quao preciso voce quer o numero pi, quanto maior a entrada mais precisa a aproximacao.\n");
    scanf("%Lf",&numero);

    printf("%Lf", aproximacao(numero));

return 0;
}

long double aproximacao(double numero){
    int elevado = 0;

    if(!numero)  return 4;

    else{
        elevado = pow(-1.0,numero);
        return ((aproximacao(numero-1)) + (4 * ( elevado / (2*numero+1))));
    }
}