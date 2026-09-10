#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int numero;


printf("Digite um número: ");

scanf("%d", &numero);

printf("o dobro é: %d\n", numero *2 );
 

    return 0;
}