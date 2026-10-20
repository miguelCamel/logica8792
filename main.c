#include<stdio.h>
#include<windows.h>
#include<string.h>





int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int n = 1;
int soma = 0;

while(n <= 100){
  soma = n + n;
  printf("%d + %d = %d\n", n, n, soma);
  n++;
}
return 0;
}