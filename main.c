#include<stdio.h>
#include<windows.h>
#include<string.h>
struct Pessoa{
    char nome[50];
    int idade;
    float altura;
};


int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

struct Pessoa p1 = {"Eduardo", 39, 1.70};
struct Pessoa p2 = {"Clara", 30, 1.65};
struct Pessoa p3 = {"Joana", 40, 1.80};

printf("Nome: %s | Idade: %d | Altura: %.2f\n", p1.nome, p1.idade, p1.altura);
printf("Nome: %s | Idade: %d | Altura: %.2f\n", p2.nome, p2.idade, p2.altura);
printf("Nome: %s | Idade: %d | Altura: %.2f\n", p3.nome, p3.idade, p3.altura);

return 0;
}