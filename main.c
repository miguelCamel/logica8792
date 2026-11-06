#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

void contador(int numero){
    for(int i = 1; i <= numero; i++){
        printf("%d\n", i);
    }
}

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
contador(5);

return 0;
}