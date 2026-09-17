#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int opcao;

printf("--- SISTEMA DE PEDÁGIO---\n");
printf("1 -Moto\n");
printf("2 -Carro Passeio\n");
scanf("%d", &opcao);
switch(opcao){
    case 1:
    printf("Cateogira: Moto | Tarifa: R$ 5,00\n");
    break;
    case 2:
    printf("Categoria: Carro Passeio | Tarifa: R$ 10,00\n");
    break;
    default:
    printf("Erro: Categoria não considerada no sistema.\n");
    break;
}
return 0;
}
