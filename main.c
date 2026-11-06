#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

void tabuada(int numero, int contador){
    if(contador > 10){
        return;
    }
    printf("%d x %d = %d\n", numero, contador, numero * contador);

    tabuada(numero, contador + 1);
}
int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
tabuada(7, 1);

return 0;
}