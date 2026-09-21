#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

char nomes[4][20] ={"Aurea", "Miguel", "Julio", "Rafaela"};

printf("%s\n", nomes[0]);
printf("%s\n", nomes[1]);
printf("%s\n", nomes[2]);
printf("%s\n", nomes[3]);









    return 0;
}