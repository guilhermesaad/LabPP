/*
 * Arquivo: imc.c
 * Data criação: 03/nov/2022
 * Autor: Guilherme Saad
 * Calcula o Indice de Massa Corporal
 */

#include <stdio.h>

int main(int argc, char *argv[]){
    float peso = 0.00;
    float altura = 0.00;

    printf("Qual seu peso?\n");
    scanf("%f", &peso);
    printf("Qual sua altura?\n");
    scanf("%f", &altura);

    float IMC = peso/(altura*altura);

    if(IMC<16){
        printf("%0.2f (Perigo de vida)", IMC);
    }
    if(IMC>16 && IMC<17){
        printf("%0.2f (Muito abaixo do peso)", IMC);
    }
    if(IMC>17.00 && IMC<18.50){
        printf("%0.2f (Abaixo do peso)", IMC);
    }
    if(IMC>18.50 && IMC<25.00){
        printf("%0.2f (Peso normal)", IMC);
    }
    if(IMC>25.00 && IMC<30.00){
        printf("%0.2f (Acima do peso)", IMC);
    }
    if(IMC>30.00 && IMC<35.00){
        printf("%0.2f (Obesidade grau I)", IMC);
    }
    if(IMC>35.00 && IMC<40.00){
        printf("%0.2f (Obesidade grau II)", IMC);
    }
    if(IMC>40.00){
        printf("%0.2f (Obesidade grau III)", IMC);
    }
    
    

return 0;
}