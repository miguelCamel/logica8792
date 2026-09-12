#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){


    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n;
char text[3] = "sim";
char texto[3] = "nao";


printf("Digite um número: ");
scanf("%d", &n);

printf("Você deseja saber o antecessor?");
scanf("%d");
if ("sim"){
printf("Antecessor: %d\n", n - 1);

}else{
    printf("Ok, Boa noite!\n");

}









    return 0;
}