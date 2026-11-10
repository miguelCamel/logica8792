#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int quadrado(int n){
    return n * n;
}
int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int numero;

printf("Digite o número do seu quadrado: ");
scanf("%d", &numero);

printf("%d^2 = %d", numero, quadrado(numero));




return 0;
}