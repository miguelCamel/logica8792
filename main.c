#include<stdio.h>
#include<windows.h> 
#include<string.h>

int func(int a, int b){
    return a + b;
}




int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int resposta;

do{
    printf("Executando o programa...\n");
    printf("Deseja continuar? (1-Sim / 0-Não): ");
    scanf("%d", &resposta);

}while(resposta == 1);
printf("Programa encerrado!\n");



return 0;
}