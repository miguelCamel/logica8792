#include<stdio.h>
#include<windows.h>
#include<string.h>





int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int numero, pares = 0;
printf("Digite um número(0 para sair): ");
scanf("%d", &numero);
while(numero != 0){
  if(numero % 2 == 0){
    pares++;
  }
  
printf("Digite um número (0 para sair): ");
scanf("%d", &numero);
 
  
  
  
}

printf("Quantidade de pares: %d\n", pares);
return 0;
}