/*
 * Arquivo: somaDivisores.c
 * Data criação: 04/nov/2022
 * Autor: Guilherme Saad
 * Calculoa a soma dos divisores positivos
 */

#include <stdio.h>

int somaDivisores(int X);

int main(int argc, char *argv[]){


    int num = 0;
    printf("Digite seu numero: \n");
    scanf("%d", &num);

    

    printf("%d", somaDivisores(num));

return 0;
}

int somaDivisores(int X){
    int count = 0;

    for(int i = 1; i<=X; i++){

        if(X%i==0)
        {count = count + i;}

        int num = num / i;
    }

return count;
}
