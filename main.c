#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int a = 5;
    int b = 4;
    

    printf("O maior numero é: %d\n", (a + b));
    printf("A subtração dos dois números é: %d\n", (a - b));
    printf("A multiplicação dos dois números é: %d\n", (a * b));
    printf("A divisão dos dois número é: %d\n", (a / b ));

    return 0;
}