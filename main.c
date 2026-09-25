#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
int n, log;


printf("Digite um número: ");
scanf("%d", &n);

for(int i = 1; i <= 10; i++){
    printf("%d\n", n * i);
}
log = n * n;
printf("O Resultado é: %d", log);







    return 0;
}