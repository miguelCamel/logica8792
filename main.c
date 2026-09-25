#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

int numero, contador = 0;

printf("Digite números (0 para parar): \n");
scanf("%d", &numero);

while(numero != 0){
    contador++;
    scanf("%d", &numero);
}
printf("Quantidade de número digitados: %d\n", contador);
    return 0;
}