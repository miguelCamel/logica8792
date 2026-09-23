#include<stdio.h>
#include<windows.h>
#include<string.h>

void tabuada(int n){
    printf("Tabuada do %d\n", n);
    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", n, i, n * i);

    }
}



int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

tabuada(7);








    return 0;
}