#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int numero[3];
numero[0] = 10;
numero[1] = 20;
numero[2] = 30;

printf("%d", numero[2]);
    return 0;
}