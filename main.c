#include<stdio.h>
#include<windows.h>
#include<string.h>





int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int contador = 1;

while(contador <= 10){
  printf("%d\n", contador);
  contador++;
}

return 0;
}