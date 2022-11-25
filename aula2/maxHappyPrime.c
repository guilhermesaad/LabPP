/*
 * Arquivo: maxHappyPrime.c
 * Data criação: 25/nov/2022
 * Autor: Guilherme Saad
 * primo feliz
 */

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool primo(int a);
bool feliz(int a);
int tamanho(int a);

int main(int argc, char** argv){
	
    int n, r;
    r = -1;
    printf("coloque o n:");
    scanf("%d", &n);
    
    for(int i = 2; i<=n;i++){
        if(primo(i) && feliz(i)){
            r=i;
        }
    }
    if(r ==-1){
        printf("0***\n");
    }else{
        printf("%d\n", r);
    }

	return 0;
}

bool primo(int a){
    for(int i=2; i<a;i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}

bool feliz(int a){

    int n;
    int s = 0;
    int c;
    while(true){
        int b[100];
        s = 0;

        for (int j = tamanho(a); j>0;j--){
            c = a/pow(10, j-1);
            n = c %10;
            b[j-1] = n;
            
        }

        for (int i=0; i<tamanho(a); i++){
            s = s + (b[i]*b[i]);
        }
        a = s;
        
        if(s == 4){
            return false;
        }else if(s == 1){
            return true;
        }

    }
}

int tamanho(int a){
    int i, s, t;
    i = 0;
    if(a <10){
        t = 1;
    }else{

        while(true){
            s = a/10;
            i++;
            a = s;
            if(s <10){
                i++;
                break;
            }
        }

        t = i;
    }
    return t;

}
