#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n, divisao, log;

printf("Digite um número: ");
scanf("%d", &n);

while(n != 0){
    divisao = n % 10;
    log = log * 10 + divisao;
    n  /= 10;
    

}
printf("%d", log);























    return 0;
}