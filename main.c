#include<stdio.h>
#include<windows.h> 
#include<string.h>

int func(int a, int b){
    return a + b;
}




int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int idade;

do{
    printf("Digite sua idade: ");
    scanf("%d", &idade);
}while(idade <= 0 || idade >= 120 );
printf("Acesso liberado!");

return 0;
}