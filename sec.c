#include<stdio.h>
#include<windows.h>



float som(float a, float b){
   return a + b;
}


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

float d, c;

printf("Digite o primeiro número: ");
scanf("%f", &d);

printf("Digite o segundo número: ");
scanf("%f", &c);

printf("%.2f + %.2f = %.2f",d, c,  som(d, c));






    return 0;
}