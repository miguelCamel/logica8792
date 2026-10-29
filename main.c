#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int fun(int hours){
    return hours / 60;
}

int funm(int hours){
    return hours % 60;
}


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int horas;

printf("Digite suas horas em minutos: ");
scanf("%d", &horas);

printf("%d horas e %d minutos", fun(horas), funm(horas));

return 0;


}