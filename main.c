#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int numeros[] = {10,20, 30};
int lenght = sizeof(numeros) / sizeof(numeros[0]);

printf("%d", lenght);
    return 0;
}