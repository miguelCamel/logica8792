#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n, soma = 0;
printf("Digite um número: ");
scanf("%d", &n);
for(int i = 1; i < n; i++){
    if(n % i == 0){
        soma += i;
    }
}
if(soma == n){
    printf("%d é um número perfeito\n", n);
}else{
    printf("%d Não é um número perfeito\n", n);
}

























    return 0;
}