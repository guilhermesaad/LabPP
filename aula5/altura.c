/*
 * Arquivo: altura.c
 * Data criação: 05/jan/2023
 * Autor: Guilherme Saad
 * Acha o fibonacci
 */

#include <stdio.h>

typedef
    struct Altura{
        int metros, centimetros;
    }
Altura;

int cm(int x);

int main(){
    Altura altura; 
    printf("Me de uma altura: ");
    scanf("%d.%d", &altura.metros, &altura.centimetros);
    altura.centimetros = cm(altura.centimetros);

    printf("Altura %dm%d\n", altura.metros, altura.centimetros);

return 0;
}

int cm(int x){
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
return x;
}