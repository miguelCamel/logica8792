#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int numero[] = {1, 2, 3};
numero[0] = 10;

printf("%d", numero[0]);
    return 0;
}