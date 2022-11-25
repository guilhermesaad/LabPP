#include <stdio.h>
#include <math.h>


float distpontos(float a, float b,float c, float d){
   float somadosquadrados = sqrt(pow((c-a),2)+pow((d-b),2));
   return somadosquadrados;
}


int main(int argc, char** argv) {
   float a,b,c,d;
   printf("%f",distpontos(a=0,b=0,c=1,d=1));

return 0;
}

