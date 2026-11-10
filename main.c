#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int maiorDeTres(int a, int b, int c){
    int maior = a;

    if(b > maior){
        maior = b;
    }
    if(c > maior){
        maior = c;
    }
    return maior;
}


int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

printf("Maior: %d\n", maiorDeTres(4, 6, 9));
printf("Maior: %d\n", maiorDeTres(9, 6, 4));
printf("Maior: %d\n", maiorDeTres(41, 60, 19));





return 0;
}