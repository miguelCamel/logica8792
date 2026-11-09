#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>


float areaRetangulo(){
    float b, a;
    printf("Digite a altura do seu Retangulo: ");
scanf("%f", &a);

printf("Digite a base do seu Retangulo: ");
scanf("%f", &b);


 return b * a;
}

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

printf("Área: %.2f\n", areaRetangulo());


return 0;
}