#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int inverter(int numero, int resultado){
    if(numero == 0){
        return resultado;
    }
    return inverter(numero / 10, resultado * 10 + numero % 10);
}
int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n;
printf("Digite um número: ");
scanf("%d", &n);

printf("Invertido: %d\n", inverter(n, 0));
return 0;
}