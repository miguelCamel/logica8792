#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
float a, b, c, d, e, maior, igual, menor;

printf("Digite um número para a: ");
scanf("%f", &a);
printf("Digite um número para b: ");
scanf("%f", &b);
printf("Digite um número para c: ");
scanf("%f", &c);
printf("Digite um número para d: ");
scanf("%f", &d);
printf("Digite um número para e: ");
scanf("%f", &e);

maior = a;
igual = a;
menor = a;

if(b > maior) maior = b;
if(c > maior) maior = c;
if(d > maior) maior = d;
if(e > maior) maior = e;

if(b = b) igual = b;
if(c = c) igual = c;
if(d = d) igual = d;
if(e = e) igual = e;

if(b < menor) menor = b;
if(c < menor) menor = c;
if(d < menor) menor = d;
if(e < menor) menor = e;


printf("Maior: %.2f\n", maior);
printf("Menor: %.2f\n", menor);

if( (a == b == c == d == e) == igual);
printf("Os cincos são iguais");

return 0;

}