#include<stdio.h>
#include<windows.h>
#include<string.h>


int fibonacci(int termos){
    int a = 0, b = 1, c;
    printf("Sequência de Fibonacci (%d termos): \n", termos);
    for(int i = 1; i <= termos; i++){
      printf("%d\n", a);
      c = a + b;
      a = b;
      b = c;
    }
    printf("\n");
}



int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

fibonacci(10);









    return 0;
}