#include<stdio.h>
#include<windows.h>
#include<string.h>





int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int idade;
int temIngresso;
printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Possui ingresso? (1 - Sim / 0 - Não)");
scanf("%d", &temIngresso);

if(idade >= 18 && temIngresso){
  printf("Entrada permitida!\n");
}else{
  printf("Entrada não permitada!\n");
}
return 0;
}