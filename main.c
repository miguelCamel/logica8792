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

printf("Digite um número de 1 a 3: ");
scanf("%d", &n);

switch(n){
    case 1:
    printf("Seu número é: Um");
    break;
    case 2:
    printf("Seu número é: Dois");
    break;
    case 3:
    printf("Seu número é: Três");
    break;
    default:
    printf("Digite apenas número válidos!");
    break;
}


return 0;
}