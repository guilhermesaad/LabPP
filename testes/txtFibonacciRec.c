#include <stdio.h>
int fibR(int indice);
int main(){
    int num=0;
    FILE * fib;

    printf("Digite o indice da sequencia de fibonacci:\n");
    scanf("%d%*c", &num);       //Índice do Fib recursivo.

    fib = fopen("fibonacciR.txt", "w");   // Abrindo o arquivo pra poder digitar nele.

    for (int i=0; i<num; i++)
        fprintf(fib, "%d\n", fibR(i));  // Vou printar no arquivo o Fib de 1, Fib de 2... até o final.
    
    printf("%d", fibR(num));  // Printando o maior numero do fib q pediu lá

    fclose(fib);
    
return 0;
}

int fibR(int indice){
    if(indice == 0)
        return 0;
    if(indice == 1 || indice == 2)
        return 1;
    else
        return fibR(indice-1)+fibR(indice-2);
}