#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int mes;
printf("Descubra a estação do ano de cada mês no Brasil\n");
printf("Digite o nûmero do seu respectivo mês:  ");
scanf("%d", &mes);

switch(mes){

    case 1:
    printf("Seu mês é: Janeiro\n");
    printf("Sua estação é: Verão ");
    break;
    case 2:
    printf("Seu mês é: Fevereiro\n");
    printf("Sua estação é: Verão");
    break;
    case 3:
    printf("Seu mês é: Março\n");
    printf("Sua estação é: Verão");
    break;
    case 4:
    printf("Seu mês é: Abril\n");
    printf("Sua estação é: Outono");
    break;
    case 5:
    printf("Seu mês é: Maio\n");
    printf("Sua estação é: Outono");
    break;
    case 6:
    printf("Seu mês é: Junho\n");
    printf("Sua estação é: Outono");
    break;
    case 7:
    printf("Seu mês é: Julho\n");
    printf("Sua estação é: Inverno");
    break;
    case 8:
    printf("Seu mês é: Agosto\n");
    printf("Sua estação é: Inverno");
    break;
    case 9:
    printf("Seu mês é: Setembro\n");
    printf("Sua estação é: Inverno");
    break;
    case 10:
    printf("Seu mês é: Outubro\n");
    printf("Sua estação é: Primavera");
    break;
    case 11:
    printf("Seu mês é: Novembro\n");
    printf("Sua estação é: Primavera");
    break;
    case 12:
    printf("Seu mês é: Dezembro\n");
    printf("Sua estação é: Primavera");
    break;
    default:
    printf("Digite um valor valido");
    
}
return 0;
}