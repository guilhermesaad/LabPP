/*
 * Arquivo: mdc.c
 * Data criação: 06/jan/2023
 * Autor: Guilherme Saad
 * Acha o minimo multiplo comum
 */

#include <stdio.h>
#include <math.h>

void multiplica(int numerador1, int denominador1, int numerador2, int denominador2);
void divide(int numerador1, int denominador1, int numerador2, int denominador2);
void diferencaSoma(int numerador1, int denominador1, int numerador2, int denominador2);
void simplifica(int numerador, int denominador);
int mdc(int numero1, int numero2);

int main(){
    int numerador1, denominador1, numerador2, denominador2;

    printf("Digite dois numeros racionais com numerador e um denominador diferente de zero\n");
    scanf("%d %d", &numerador1, &denominador1);
    scanf("%d %d", &numerador2, &denominador2);

    simplifica(numerador1, denominador1);   simplifica(numerador2, denominador2);
    diferencaSoma(numerador1, denominador1, numerador2, denominador2);
    multiplica(numerador1, denominador1, numerador2, denominador2);
    divide(numerador1, denominador1, numerador2, denominador2);
    
return 0;
}


void diferencaSoma(int numerador1, int denominador1, int numerador2, int denominador2){
    int sumNumerador, sumDenominador = 0;
    int difNumerador, difDenominador = 0;

    sumNumerador = numerador1*denominador2 + numerador2*denominador1;
    sumDenominador = denominador1*denominador2;

    difNumerador = numerador1*denominador2 - numerador2*denominador1;
    difDenominador = denominador1*denominador2;

    simplifica(sumNumerador,sumDenominador);
    simplifica(difNumerador,difDenominador);
    
}

void multiplica(int numerador1, int denominador1, int numerador2, int denominador2){
    int xNumerador = 0; 
    int xDenominador = 0;

    xNumerador = numerador1*numerador2;
    xDenominador = denominador1*denominador2;

    simplifica(xNumerador,xDenominador);

}

void divide(int numerador1, int denominador1, int numerador2, int denominador2){
    int divNumerador = 0; 
    int divDenominador = 0;

    divNumerador = numerador1*denominador2;
    divDenominador = denominador1*numerador2;

    simplifica(divNumerador, divDenominador);

}

void simplifica(int numerador, int denominador){
    int Mdc = 0;
    Mdc = mdc(numerador, denominador);

    int numeradorSimplificado = numerador/Mdc;
    int denominadorSimplificado = denominador/Mdc;

    if (denominadorSimplificado<0){
        numeradorSimplificado *= -1;
        denominadorSimplificado *= -1;
    }

    printf("%d/%d\t", numeradorSimplificado, denominadorSimplificado);

}

int mdc(int numero1, int numero2){

    if(!numero2)    
        return numero1;
    else            
        mdc(numero2, numero1%numero2);
}