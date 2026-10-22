#include<stdio.h>
#include<windows.h> 
#include<string.h>

int func(int a, int b){
    return a + b;
}




int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

float nota;
do{
    printf("Digite uma nota (0 a 10): ");
    scanf("%f", &nota);
}while(nota < 0 || nota > 10);
printf("Nota Válida: %.1f\n", nota);
 



return 0;
}