#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n1, n2, n3, maior;

printf("Digite três números: ");
scanf("%d %d %d", &n1, &n2, &n3);

maior = n1;

if(n2 > maior) maior = n1;
if(n3 > maior) maior = n2;

printf("Maior: %d", maior);

    return 0;
}