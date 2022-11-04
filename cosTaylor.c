/*
 * Arquivo: cosTaylor.c
 * Data criação: 04/nov/2022
 * Autor: Guilherme Saad
 * Calcular a séria de Taylor
 */

#include <stdio.h>

#ifdef M_PI
  #undef M_PI
#endif
#define M_PI 3.141592653589793115997963468544185161590576171875

int fatorial(int X );
int potp(int Y, int P);

int main(int argc, char *argv[]){

    int n = 0;
    double x = 0.00;
    double taylor = 0; 

    printf("Digite o seu n: \n");
    scanf("%d",&n);

    printf("Digite o seu x: \n");
    scanf("%f",&x);

    for(int i=1; i<n; i++){

        taylor = potp(-1, i) * ((potp(x * M_PI, 2*i))/fatorial(2*i));

    }

    printf("%f\n", taylor);



return 0;   
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int potp(int Y, int P){
    int pot = 0;

    if(P >= 0){
        pot = Y;

        for(int i=1; i<P; i++){
            pot = pot  * Y;
        }
    }
    else{return 0;}

return pot;
}

int fatorial(int X){
    if(X == 0){
        return 1;
    }

    return X*fatorial(X-1);
}