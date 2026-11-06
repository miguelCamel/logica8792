#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

void contar(int numero){
    if(numero == 0){
        return;
    }
    printf("%d\n", numero);
    contar(numero - 1);
}


int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
contar(5);

return 0;
}