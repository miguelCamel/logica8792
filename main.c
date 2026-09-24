#include<stdio.h>
#include<windows.h>
#include<string.h>

void linha(int tamanho){
  for(int i = 0; i < tamanho; i++){
    printf("*");
  }
  printf("\n");
}

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

linha(2000);

    return 0;
}