/*
 * Arquivo: maxHappyPrime.c
 * Data criação: 25/nov/2022
 * Autor: Guilherme Saad
 * primo feliz
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool primo(int n);
int feliz1(int n);
bool feliz2(int n);

int main(){

    int n = 0;
    printf("Digite seu numero: \n");
    scanf("%d", &n);

    if(n<7){
            printf("Nenhum numero foi encontrado\n");
    }
    else{
        while(1){

            if(primo(n) && feliz2(n)){
                printf("%d", n);
                break;
            }
            n=n-1;
        }
    }
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

int feliz1(int n){    
    int rem = 0, sum = 0;    
          
    while(n > 0){    
        rem = n%10;    
        sum = sum + (rem*rem);    
        n = n/10;    
    }    
    return sum;    
}

bool feliz2(int n){
    while(n != 1 && n != 4){
        n = feliz1(n);
    }
    if(n == 1)    
        return true;  
  
    if(n == 4)    
        return false;
}
