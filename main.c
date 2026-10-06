#include<stdio.h>
#include<windows.h>


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int numero;

do{
    printf("Digite um número maior que 0: ");
    scanf("%d", &numero);
}while(numero <= 0);

printf("Você digitou %d, que é valido!\n", numero);

    return 0;
}