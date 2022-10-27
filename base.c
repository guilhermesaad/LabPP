/*
 * Arquivo: base.c
 * Data criação: 27/out/2022
 * Autor: Guilherme Saad
 * Meu primeiro código em C99
 */


#include <stdio.h>



int main(int argc, char** argv)
{

    if(argv < 3) 
    {
            printf("Erro!\n");
            return -1;
    }


    
    for(int i=0; i < argc; ++i)
        printf("%s\n", argv[i]);
    printf("Bom dia seu verme insolente ahahahahah");

    return 0;


}