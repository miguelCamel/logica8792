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

int n;
printf("Quantas pessoa deseja cadastrar: ");
scanf("%d", &n);
getchar();
struct Pessoa p1[n];
for(int i = 0; i < n; i++){
    printf("\nPessoa %d\n ", i + 1);
    printf("Nome completo: ");
    fgets(p1[i].nome, sizeof(p1[i].nome), stdin);
    p1[i].nome[strcspn(p1[i].nome, "\n")] = '\0';
    printf("Idade: ");
    scanf("%d", &p1[i].idade);
    printf("Altura: ");
    scanf("%f", &p1[i].altura);
    printf("Peso: ");
    scanf("%f", &p1[i].peso);
    getchar();
}
printf("\n--- Lista de Pessoas---\n");
for(int i = 0; i < n; i++){
    printf(" Nome %d: %s | Idade: %d | Altura: %.2f | Peso: %.2f",i + 1, p1[i].nome, p1[i].idade, p1[i].altura, p1[i].peso);
}
return 0;
}