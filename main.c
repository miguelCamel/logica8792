#include<stdio.h>
#include<windows.h>
#include<string.h>

int func(int a, int b){
    return a + b;
}




int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int n;
do{
    printf("Digite um número (não negativo): ");
    scanf("%d", &n);
}while(n < 0);

printf("Você digitou: %d\n", n);


return 0;
}