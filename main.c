#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int idade[3] = {15, 56, 64};
printf("%s %d %s", "Miguel tem, ", idade[0], "anos!\n");
printf("%s %d %s", "Áurea tem, ", idade[1], "anos!\n");
printf("%s %d %s", "Julio tem, ", idade[2], "anos!\n");
    return 0;
}