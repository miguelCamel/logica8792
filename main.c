#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

int contador = 1;

while(contador <= 50){
    if(contador % 2 == 0){
    printf("%d\n", contador);
    contador++;
    }
    contador++;
}

    return 0;
}