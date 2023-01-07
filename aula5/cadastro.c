/*
 * Arquivo: cadastro.c
 * Data criação: 07/jan/2023
 * Autor: Guilherme Saad
 * Fazendo um cadastro de pessoas com struct
 */

#define possiveisCadastros 10
#include <stdio.h>

struct Nome {
    char nome[12];
};

struct Altura {
    int metros;
    int centimetros;
};

struct Peso {
    float peso;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

typedef     
    struct Cadastro {
        struct Nome Nome;
        struct Altura Altura;
        struct Peso Peso;
        struct Data Data;
    }

Cadastro[possiveisCadastros];   // No máximo 10 pessoas podem fazer cadastro (linha 7).

const char strMes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};

void imprime(float peso, int metros, int centimetros, int dia, int mes, int ano, char nome[12]);
int cm(int x);

int main(){

    int pessoas = 0;
       
    printf("Digite quantas pessaos você quer fazer cadastro:\n");
    scanf("%d", &pessoas);

    Cadastro Cadastro[pessoas];

    for (int i = 0; i < pessoas; i++)
    {
        printf("\n\n---CADASTRO DA PESSOA NUMERO %d --- \n\n", i+1);

        printf("Digite o nome da pessoa\n");
        fflush(stdin);
        fgets(Cadastro[i]->Nome.nome, 12, stdin);
        fflush(stdin);

        printf("Entre com uma data no formato D/M/YYYY (ex: 7/1/2023) \n");
        scanf("%d/%d/%d", &Cadastro[i]->Data.dia, &Cadastro[i]->Data.mes, &Cadastro[i]->Data.ano);

        printf("Entre com a altura da pessoa\n");
        scanf("%d.%d", &Cadastro[i]->Altura.metros, &Cadastro[i]->Altura.centimetros);

        printf("Entre com o peso da pessoa\n");
        scanf("%f", &Cadastro[i]->Peso.peso);
    }

    for (int i = 0; i < pessoas; i++)    
        imprime(Cadastro[i]->Peso.peso, Cadastro[i]->Altura.metros, Cadastro[i]->Altura.centimetros, Cadastro[i]->Data.dia,Cadastro[i]->Data.mes,Cadastro[i]->Data.ano, Cadastro[i]->Nome.nome);
    
return 0;
}


void imprime(float peso, int metros, int centimetros, int dia, int mes, int ano, char nome[12]){
    centimetros = cm(centimetros);

    printf("%s;\t", nome);
    printf("%02d%s%04d;\t", dia, strMes[mes], ano);
    printf("%dm%d;\t", metros, centimetros);
    printf("%.1fkg", peso);
    printf("\n");
}


int cm(int x){
    if(x < 10) return x*10;
    if(x > 99) return cm(x/10);
return x;
}