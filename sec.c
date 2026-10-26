#include<stdio.h>
#include<windows.h> 
#include<string.h>


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int horas;

printf("Digite horas em minutos: ");
scanf("%d", &horas);

printf("%d horas e %d minutos", horas / 60, horas % 60);


return 0;
}