#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int maiorDeTres(int a, int b, int c){
    int maior = a;

    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    return maior;
}


int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int n1, n2, n3;

printf("Digite o primeiro número: ");
scanf("%d", &n1);

printf("Digite o segundo número: ");
scanf("%d", &n2);

printf("Digite o terceiro número: ");
scanf("%d", &n3);

printf("Maior: %d\n", maiorDeTres(n1, n2, n3));





return 0;
}