#include<stdio.h>
#include<windows.h>
#include<string.h>




int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int numero;

printf("Digite um número: ");
scanf("%d", &numero);

if(numero % 2 == 0 ){
    printf("Seu número é par");
}else{
    printf("Seu número é impar");
}

    return 0;
}