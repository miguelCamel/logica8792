#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int quadrado(int numero){
    return numero * numero;
}
int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int n;

printf("Digite um número e veja o seu quadrado: ");
scanf("%d", &n);

printf("%d^2 = %d", n, quadrado(n));

return 0;


}