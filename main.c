#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int numerosInteiros[5] = {1, 5, 10, 15, 20};
float numerosFloats[5] = {10.5, 20.8, 30.2, 30.9, 50.1};
char carros[3][20] = {"Fusca", "Camaro", "Ferrari"};


printf("%d\n", numerosInteiros[0]);
printf("%d\n", numerosInteiros[1]);
printf("%d\n", numerosInteiros[2]);
printf("%d\n", numerosInteiros[3]);
printf("%d\n", numerosInteiros[4]);

printf("%.2f\n", numerosFloats[0]);
printf("%.2f\n", numerosFloats[1]);
printf("%.2f\n", numerosFloats[2]);
printf("%.2f\n", numerosFloats[3]);
printf("%.2f\n", numerosFloats[4]);

printf("%s\n", carros[0]);
printf("%s\n", carros[1]);
printf("%s\n", carros[2]);


    return 0;
}