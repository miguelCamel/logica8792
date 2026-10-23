#include<stdio.h>
#include<windows.h> 
#include<string.h>

int func(int a, int b){
    return a + b;
}




int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int opcao;

do{
    printf("\n--- MENU ---");
    printf("1 - Dizer olá\n");
    printf("2 - Dizer tchau\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &opcao);
    if(opcao == 1){
        printf("Olá\n");
    }else if(opcao == 2){
        printf("Tchau!");
    }else if(opcao != 0){
        printf("Opçâo inválida!\n");
    }
}while(opcao != 0);
printf("Até mais\n");

return 0;
}