#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int numeros[] = {10,20, 30};

printf("%zu", sizeof(numeros));
    return 0;
}