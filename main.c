#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

int soma = 0;
for(int i = 1; i <= 50; i++){
    if(i % 2 == 1){
        printf("%d\n", i);
        soma += i;
    }
    
}
printf("A soma dos impares é: %d", soma);

return 0;
}