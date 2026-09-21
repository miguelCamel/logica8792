#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

char frutas[3][20] ={"Maçã", "Banana", "Laranja"};

printf("%s\n", frutas[0]);
printf("%s\n", frutas[1]);
printf("%s\n", frutas[2]);









    return 0;
}