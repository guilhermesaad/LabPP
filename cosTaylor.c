/*
 * Arquivo: cosTaylor.c
 * Data criação: 04/nov/2022
 * Autor: Guilherme Saad
 * Calcular a séria de Taylor
 */

#include <stdio.h>
#include <math.h>

#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.14159265358979311599796346544185161590576171875

int fatorial(int X );

int main(int argc, char *argv[]){

    int n = 0;
    double x = 0.00;
    double taylor = 0.00; 

    printf("Digite o seu n: \n");
    scanf("%d",&n);

    printf("Digite o seu x: \n");
    scanf("%lf",&x);

    for(int i=0; i<n; i++){

        taylor = ((pow(-1, i)) * ((pow(x * M_PI, 2*i))/fatorial(2*i))) + taylor;

    }

    printf("%lf\n", taylor);

return 0;   
}


int fatorial(int X){
    if(X == 0){
        return 1;
    }

    return X*fatorial(X-1);
}