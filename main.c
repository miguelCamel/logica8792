#include<stdio.h>
#include<windows.h>
#include<string.h>

void verificarEhParImpar(int n){
    if(n % 2 == 0){
        printf("%d é par!\n", n);
    }else{
        printf("%d é ímpar\n", n);
    }
}

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

verificarEhParImpar(10);
verificarEhParImpar(7);




    return 0;
}