#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int soma(int n){
  int total = 0;
  for(int i = 1; i <= n; i++){
    total += i;
  }
   return total;
}

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int num;
printf("Digite um valor: ");
scanf("%d", &num);

printf("Soma de 1 até... %d\n", soma(num));

return 0;
}