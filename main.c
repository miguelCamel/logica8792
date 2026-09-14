#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n;
printf("Digite um número: ");
scanf("%d", &n);

if(n % 2 == 0){
    printf("Par");
}else
    printf("Impar");











    return 0;
}