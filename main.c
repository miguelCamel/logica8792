#include<stdio.h>
#include<windows.h>
#include<string.h>

struct Pessoa{
    char nome[50];
    int idade;
    float altura;
    float peso;
};


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

struct Pessoa p1;
printf("--- Bem vindo a academia Reis ---");
printf("\n");

printf("Qual seu nome: ");
scanf("%s", p1.nome);

printf("Digite sua idade: ");
scanf("%d", &p1.idade);

printf("Digite sua altura: ");
scanf("%f", &p1.altura);

printf("Digite seu peso: ");
scanf("%f", &p1.peso);

printf("Nome: %s\nIdade: %d\nAltura: %.2f\nPeso: %.2f",p1.nome, p1.idade, p1.altura, p1.peso);



return 0;
}