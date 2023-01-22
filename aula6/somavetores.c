/*
 * Arquivo: somavetores.c
 * Data criação: 12/jan/2023
 * Autor: Guilherme Saad
 * Soma vetores e retorna um terceiro
 */


#include <stdio.h>
#include <stdbool.h>

bool soma(int * vetor1, int tamanho1, int * vetor2, int tamanho2, int * resultado);

int main(){

    int tamanho1, tamanho2;

    printf("Digite o tamanho do primeiro vetor:\n");
    scanf("%d%*c", &tamanho1);

    printf("Digite o tamanho do segundo vetor:\n");
    scanf("%d%*c", &tamanho2);

    int vetor1[tamanho1];
    int vetor2[tamanho2];
    int resultado[tamanho1];

    if(!soma(vetor1, tamanho1, vetor2, tamanho2, resultado))
        printf("Nao e possivel somar vetores de tamanhos diferentes!\n");

    if(soma(vetor1, tamanho1, vetor2, tamanho2, resultado)){

        for(int i = 0; i < tamanho1; i++){
            printf("%d, " ,resultado[i]);
        }
    }


return 0;
}

bool soma(int * vetor1, int tamanho1, int * vetor2, int tamanho2, int * resultado){
    if(tamanho1 != tamanho2)    return false;

    int n = 0;
    
    for (int i = 0, j = 0; i < tamanho1; i++, j++){    
        vetor1[i] = 2*j + 1;                  //impar
        
        vetor2[i] = j * 4;                  //multiplo de 4
        
        resultado[i] = vetor1[i] + vetor2[i];
    }

    return true;

}

