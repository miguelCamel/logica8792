#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

int n;

do{

printf("Digite um número: ");
scanf("%d", &n);

}while(n < 0);

return 0;
}