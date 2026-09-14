#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int a, b, c, d, e, maior;

printf("Digite cinco número: ");
scanf("%d %d %d %d %d ", &a, &b, &c, &d, &e);

maior = a;

if(b > maior) maior = b;
if(c > maior) maior = c;
if(d > maior) maior = d;
if(e > maior) maior = e;

printf("O maior número é: %d", maior);

return 0;

}