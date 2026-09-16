#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int idade;
int ehEstudante;

printf("Qual sua idade?");
scanf("%d", &idade);
printf("\nVocê é estudando (0 - Não | 1 - Sim):");
scanf("%d", &ehEstudante);

if((idade >= 60) && (ehEstudante == 1)){
    printf("Parabéns, você tem direito a desconto!");

}else{
    printf("Infelizmente você não terá desconto!");

}

return 0;
}
