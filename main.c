#include<stdio.h>
#include<windows.h>
#include<string.h>





int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int numero, soma = 0, log;

while(numero != 0){
  printf("Digite um número: ");
  scanf("%d", &numero);//se eu digito zero, a variavel guarda zero
  soma += numero;

 
  
  
  
}
 if(soma % 2 == 0){
    printf("Par\n");
  }else{
    printf("Impar\n");
  }
  
printf("%d", soma);
return 0;
}