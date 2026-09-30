#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int n, primo = 1;
printf("Digite um número: ");
scanf("%d", &n);

if(n < 2){
    primo = 0;
}else{
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            primo = 0;
            break;
        }
    }
}
if(primo){
    printf("%d é primo\n", n);
}else{
    printf("%d não é primo\n", n);
}











    return 0;
}
