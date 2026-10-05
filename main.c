#include<stdio.h>
#include<windows.h>

char* retornarNome(char nome[]){
    return nome;
}
int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

printf("O nome é: %s\n", retornarNome("Miguel"));



    return 0;
}