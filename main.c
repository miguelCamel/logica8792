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

printf("Digite um número de 1 a 12: ");
scanf("%d", &n);

switch(n){
    case 1://1  3  5 7  8  10  12
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("O número de dias é: 31");
    break;
    case 4://4 || 6 || 9 || 11
    case 6:
    case 9:
    case 11:
    printf("O número de dias é 30");
    break;
    case 2:
    printf("O número de dias é 28");
    break;
    default:
    printf("Digite um número válido!");
    break;
}


return 0;
}