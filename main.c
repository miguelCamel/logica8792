#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
float n;
int idade;

printf("Digite sua idade: ");
scanf("%d", &idade);

if(idade >= 50){
    printf("Você é Senior");

}else if(idade >= 18){
printf("Você é maior de idade");
}else if(idade >= 12){
    printf("Você é adolescente");
}else if(idade >= 9){
    printf("Você é pré-adolescente");
}else
    printf("Você é criança");
    
    return 0;
}