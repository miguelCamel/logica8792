#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>



int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

char placa[7];
int op;
char cadastro;

do{
printf("\n--- DETRAN ---\n 1-CADASTRAR\n 2-VER\n 3-SAIR\n");
scanf("%d", &op);
if(op == 1){
    printf("Digite sua placa: ");
    scanf("%s", placa);
    
}else if(op == 2){
    printf("Sua placa é: %s ", placa);
}else if(op == 3){
    printf("Programa finalizado!"); 
}else{
    printf("Digite um número válido!\n");
}
}while(op != 3);



return 0;


}