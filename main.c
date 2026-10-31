#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>



int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int numeros[5];
int soma = 0;
for(int i = 0; i < 5; i++){
    printf("Digite o %d número: ", i + 1);
    scanf("%d", &numeros[i]);
    soma = soma + numeros[i];
}
printf("\nSoma = %d\n", soma);
return 0;


}