/*
 * Arquivo: dist.c
 * Data criação: 24/nov/2022
 * Autor: Guilherme Saad
 * Calculando distancia de dois pontos
 */

#include <stdio.h>
#include <math.h>

float distancia(float x1, float y1, float x2, float y2);

int main(){

    float xA, xB, yA, yB = 0.0;

    printf("Digite seu primeiro ponto x e y\n");
    scanf("%f%f",&xA,&yA); 


    printf("Digite seu segundo ponto x e y\n");
    scanf("%f%f",&xB,&yB);

    

    printf("Sua distancia e: %f \n", distancia(xA,yA,xB,yB));

return 0;
}

float distancia(float x1, float y1, float x2, float y2){
    float dist = 0.0;
    dist = sqrt(pow((x1-x2),2)+pow((y1-y2),2));

return dist;
}

