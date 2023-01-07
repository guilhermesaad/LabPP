/*
 * Arquivo: mdc.c
 * Data criação: 05/jan/2023
 * Autor: Guilherme Saad
 * Acha o minimo multiplo comum
 */
#include <stdio.h>

int mdc(int numero1, int numero2);

int main(){
    int num1, num2, max = 0;

    printf("Digite seu primeiro numero:\t");
    scanf("%d", &num1);

    printf("Digite seu segundo numero\t");
    scanf("%d", &num2);

    printf("%d",mdc(num1,num2));

return 0;
}

int mdc(int numero1, int numero2){
    if(numero2 == 0)
        return numero1;
    else{
        mdc(numero2, numero1%numero2);
    }

}