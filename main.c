#include<stdio.h>
#include<windows.h>
#include<string.h>





int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int n;

printf("  --- CONTAGEM REGRESSIVA ---\n ");
printf("Digite um número: ");
scanf("%d", &n);
while(n >= 0){
  printf("%d\n", n);
  n--;
}
return 0;
}