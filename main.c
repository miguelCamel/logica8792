#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int numero;
    printf("Digite um número positivo: ");
    scanf("%d", &numero);

    while(numero <= 0){
        printf("Número inválido! Digite novamente: ");
        scanf("%d", &numero);
    }
    printf("Número válido: %d\n", numero);
    
    return 0;
}