#include<stdio.h>
#include<windows.h>

int main(){


    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

int n;
char Sim = ("Sim");
char Não = ("Não");

printf("Digite um número: ");
scanf("%d", &n);

printf("Você deseja saber o antecessor?");
scanf("%d");
if (Sim){
    printf("Antecessor: %d\n", n - 1);
    scanf("%d");
 }else(Não);
scanf("%c");
     printf("Ok, Boa noite!");











    return 0;
}