/*
 * Arquivo: datas.c
 * Data criação: 07/jan/2023
 * Autor: Guilherme Saad
 * Formatando uma data
 */


#include <stdio.h>

typedef
    struct Data {
        int dia, mes, ano;
    }
Data;

const char strMes[13][4] = {
    "", "JAN", "FEV", "MAR", "ABR", "MAI", "JUN",
    "JUL", "AGO", "SET", "OUT", "NOV", "DEZ"
};

int main(){
    Data data;

    printf("Entre com uma data no formato D/M/YYYY (ex: 7/1/2023) ");
    scanf("%d/%d/%d", &data.dia, &data.mes, &data.ano);
    printf("Outros formatos:\n");
    printf("- %02d.%02d.%04d\n", data.dia, data.mes, data.ano);
    printf("- %02d-%02d-%04d\n", data.mes, data.dia, data.ano);
    printf("- %02d/%02d/%02d\n", data.dia, data.mes, data.ano%100);
   
    printf("- %02d%s%04d\n", data.dia, strMes[data.mes], data.ano);

return 0;
}