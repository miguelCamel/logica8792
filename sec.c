#include<stdio.h>
#include<windows.h>

float a, b;

void som(){
    printf(" %f + %f", a + b);
}


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);



printf("Digite o primeiro número: ");
scanf("%f", &a);

printf("Digite o segundo número: ");
scanf("%f", &b);

som();






    return 0;
}