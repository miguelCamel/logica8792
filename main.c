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

for(int i = n; i >= 0; i--){
  printf("%d\n", i);
}
return 0;
}