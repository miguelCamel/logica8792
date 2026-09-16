#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int dia;
printf("Digite um número de 1 a 7: ");
scanf("%d", &dia);

switch(dia){
    case 1:
    printf("Domingo!");
    break;
    case 2:
    printf("Segunda!");
    break;
    case 3:
    printf("Terça!");
    break;
    case 4:
    printf("Quarta!");
    break;
    case 5:
    printf("Quinta!");
    break;
    case 6:
    printf("Sexta!");
    break;
    case 7:
    printf("Sabado!");
    break;
    default:
    printf("Número Invalido!");
    break;
}

return 0;
}
