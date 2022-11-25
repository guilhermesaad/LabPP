/*
 * Arquivo: aritmInt.c
 * Data criação: 03/nov/2022
 * Autor: Guilherme Saad
 * Calculadora fofa
 */
#include <stdio.h>

int main(int argc, char *argv[]){
    int Int1=0, Int2=0;

    printf("Digite dois numeros.\n");
    scanf("%d %d", &Int1, &Int2);


    int soma = Int1 + Int2;
    int multiplicacao = Int1 * Int2;
    int divisao = Int1 / Int2;
    int subtracao = Int1 - Int2;
    int resto = Int1 % Int2; 

    printf("%d+%d = %d, ", Int1, Int2, soma);
    printf("%d-%d = %d, ", Int1, Int2, subtracao);
    printf("%d*%d = %d, ", Int1, Int2, multiplicacao);
    printf("%d/%d = %d, ", Int1, Int2, divisao);
    printf("%d%%%d = %d ", Int1, Int2, resto);

return 0;
}