#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int n, m, l;
    int soma = 0;

    printf("digite 3 numeros:");
    scanf("%d %d %d", &n, &m, &l);

    soma = (n + m + l) / 3;

    printf("a media é: %d", soma);

return 0;
}