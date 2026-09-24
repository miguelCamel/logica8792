#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
int n, soma = 0;

printf("Digite um número: ");
scanf("%d", &n);

for(int i = 0; i <= n; i++){
   soma += i;
}
printf("O resultado da soma é: %d\n", soma);

    return 0;
}