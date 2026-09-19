#include<stdio.h>
#include<windows.h>
 
int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
char resposta;

printf("Bem vindo ao quiz!!!\n");
printf("1-Você esta fazendo um trabalho em grupo e todo mundo começa a discutir. O que voce faria?\n");
printf("[A] Tentaria entender por que cada pessoa esta chateada\n");
printf("[B] Tentaria mostrar os pontos bons e ruins de cada ideia\n");
printf("[C] Verificaria se alguém está passando mal ou precisa de ajuda\n");
printf("[D] Tentaria explicar tudo novamente para o grupo\n");
printf("[E] Pensaria em uma forma mais bonita de apresentar o trabalho\n");
printf("[F] Tentaria descobrir o que está dando de errado e consertar\n");
printf("Digite a letra de sua resposta: ");
scanf("%c", &resposta);

if((resposta == 'a') || (resposta == 'A')){
    printf("Voce se encaixa como: Psicologo");
}else if((resposta == 'b') || (resposta == 'B')){
    printf("Voce se encaixa como: Advogado");
}else if((resposta == 'c') || (resposta == 'C')){
    printf("Voce se encaixa como: Medico");
}else if((resposta == 'd') || (resposta == 'D')){
    printf("Voce se encaixa como: Professor");
}else if((resposta == 'e') || (resposta == 'E')){
    printf("Voce se encaixa como: Designer");
}else if((resposta == 'f') || (resposta == 'F')){
    printf("Voce se encaixa como: Programador");
}else{
    printf("Digite uma alternativa válida");
}







    return 0;
}