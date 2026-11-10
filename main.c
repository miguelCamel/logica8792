#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int somaDigitos(int n){
    int soma = 0;
    while(n != 0){
        soma += n % 10;
        n /= 10;
    }
    return soma;
}

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int numero;
printf("Digite o número e descubra a soma dos digitos: ");
scanf("%d", &numero);
printf("Soma dos digitos é: %d\n", somaDigitos(numero));




return 0;
}