#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

float n1, n2, n3, media;

printf("Digite sua nota 1: ");
scanf("%f", &n1);

printf("Digite sua nota 2: ");
scanf("%f", &n2);
printf("Digite sua nota 3: ");
scanf("%f", &n3);

media = (n1 + n2 + n3) / 3;

if(media >= 6.0){
    printf("Você foi aprovado!");
}else if(media >= 5.0){
    printf("Você está de recuperação!");
}else{
    printf("Você reprovou!");
}
return 0;
}
