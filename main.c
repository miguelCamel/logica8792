#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int palindromo(char palavra[], int inicio, int fim){
    if(inicio >= fim){
        return 1;
    }
    if(palavra[inicio] != palavra[fim]){
        return 0;
    }
    return palindromo(palavra, inicio + 1, fim - 1);
}
int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

char palavra[50] = "radar";
if(palindromo(palavra, 0, strlen(palavra) - 1)){
    printf("É palíndromo!\n");
}else{
    printf("Não é palíndromo!\n");
}
return 0;
}