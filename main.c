#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

char letra;
printf("Digite uma letra: ");
scanf("%c", &letra);

if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E'|| letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
    printf("Vogal\n");
}else{
    printf("Consoante\n");
}
return 0;
}