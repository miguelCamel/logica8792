#include<stdio.h>
#include<windows.h> 
#include<string.h>

int func(int a, int b){
    return a + b;
}




int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int numero, soma = 0;
do{
    printf("Digite um número (0 para parar): ");
    scanf("%d", &numero);
    soma += numero;
}while(numero != 0);
printf("Soma: %d\n", soma);

return 0;
}