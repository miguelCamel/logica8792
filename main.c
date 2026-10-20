#include<stdio.h>
#include<windows.h>
#include<string.h>





int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int senha = 2018;
int tentativa;
printf("Digite a senha: ");
scanf("%d", &tentativa);
while(tentativa != senha){
printf("SENHA INCORRETA TENTE NOVAMENTE: ");
scanf("%d", &tentativa);
}
printf("Acesso liberado!\n");

return 0;
}