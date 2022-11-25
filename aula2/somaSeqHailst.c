/*
 * Arquivo: somaSeqHailst.c
 * Data criação: 25/nov/2022
 * Autor: Guilherme Saad
 * soma sequencial do Hailst
 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool impar(int n);

int main(){
    int numero, soma =0;
    printf("Digite seu numero inicial\n");
    scanf("%d",&numero);
    soma = numero;

    while(numero>1){
        
        if(impar(numero)){
            numero = 3*numero + 1;
            soma += numero;
        }

        else{
            numero = numero/2;
            soma += numero;
        }

    }

    printf("%d", soma);




return 0;
}

bool impar(int n){
    if(n%2)
        return true;
    return false;

}