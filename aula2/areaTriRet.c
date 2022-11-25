/*
 * Arquivo: areaTriRet.c
 * Data criação: 24/nov/2022
 * Autor: Guilherme Saad
 * area de um triangulo
 */
#include<stdio.h>
#include<math.h>

float distancia(float x1, float y1, float x2, float y2);

int main(){
    float x1, y1, x2, y2, x3, y3, area = 0.0;
    printf("Digite seu ponto (x,y) no ponto A\n");
    scanf("%f%f",&x1,&y1);
    printf("Digite seu ponto (x,y) no ponto B\n");
    scanf("%f%f",&x2,&y2);
    
    y3 = y1;
    x3 = x2;

    area = (distancia(x1,y1,x3,y3)*distancia(x3,y3,x2,y2))/2;
    printf("%f", area);
return 0; 
}

float distancia(float x1, float y1, float x2, float y2){
    float dist = 0.0;
    dist = sqrt(pow((x1-x2),2)+pow((y1-y2),2));

return dist;
}