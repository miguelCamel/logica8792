#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int soma = 0;
int i;

for(i = 1; i <= 5; i++){
    //0 + 1
    // 1 + 2
    //3 + 3
    //6 + 4
    //10 + 5
    soma = soma + i;
}
printf("Soma é %d", soma);
    return 0;
}