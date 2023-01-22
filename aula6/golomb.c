/*
 * Arquivo: golomb.c
 * Data criação: 12/jan/2023
 * Autor: Guilherme Saad
 * XXXXXXXXXXXX
 */

#include <stdio.h>
#include <stdlib.h>



double mediav(int a, int b, int *vetor);
int golomb(int n, int *vetor);

int main(){
    int a,b;
    int *vetor;
    double media;
    printf("Me de o primeiro a, e o ultimo b\n");
    printf("(Obs: b >= a)\n");
    scanf("%d",&a);  
    scanf("%d",&b);         

    vetor = malloc((b+1) * sizeof(int));

    golomb(b+1, vetor);

    /*
    for (int i = 0; i <=b; i++){
        printf("%d, ", vetor[i]);
    }
    */


    media = mediav(a, b+1, vetor);



    printf("\nPrimeiro: %d\n", vetor[a]);
    printf("Ultimo: %d\n", vetor[b]);
    printf("Media: %lg\n", media);


    free(vetor);
return 0;
}

int golomb(int n, int *vetor){
    if(!n){
        vetor[n] = 1;
        return 1;
    }

    else{
        vetor[n] =  1 + golomb( n - golomb( golomb( n - 1, vetor) - 1 , vetor), vetor); 
        return vetor[n];
    }   
}

double mediav(int a, int b, int *vetor){
    double media = 0.0;
    for (int i = a; i < b; i++){
        media = media + vetor[i];
    }
    return media/(b-a);
}