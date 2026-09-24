#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int contador = 10;

    while(contador >= 1){
        printf("%d\n", contador);
        contador--;
    }
    return 0;
}