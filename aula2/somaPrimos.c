/*
 * Arquivo: primo.c
 * Data criação: 24/nov/2022
 * Autor: Guilherme Saad
 * soma dos primos em um intervalo
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool primo(int n);


int main(){

    int ini = 0;
    int fim = 0;
    int i = 0;
    int count = 0;

    printf("Digite seu intervalo (inicio e fim):\n");
    scanf("%d%d", &ini,&fim);
    for(i=ini; fim>i; i++){
            if(primo(i)){
                count += i;
            }
        }
    printf("%d\n",count);

return 0;
}

bool primo(int n){
    for(int i=2; i<n; i++){
        if(!(n%i))
            
            return false;
    }
    if(n==1)
    return false;
    else
    return true;
    
}