#include <stdio.h>

void divisores(int X);

int main(int argc, char *argv[]){

    int num = 0;
    printf("Digite seu numero: \n");
    scanf("%d", &num);
    divisores(num);

return 0;
}

void divisores(int X){

    for(int i = 1; i<=X; i++){
        if(X%i==0){
            printf("%d, ",i);
        }
        
        int num = num / i;
    }

}
