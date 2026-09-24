#include<stdio.h>
#include<windows.h>
#include<string.h>

void contarVogais(char palavra[]){
    int contador = 0;
  for(int i = 0; i <strlen(palavra); i++){
    char c = palavra[i];
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
        contador++;
  }

}
printf("A palavra '%s' tem %d vogais.\n", palavra, contador);
}
int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

char resposta[20];

printf("Digite uma palavra: ");
scanf("%s", resposta);

contarVogais(resposta);

    return 0;
}