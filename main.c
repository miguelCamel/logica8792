#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

float numero;

printf("Digite um número: ");

scanf("%f", &numero);

printf("Resultado: %f\n", numero * 3 );
 

    return 0;
}