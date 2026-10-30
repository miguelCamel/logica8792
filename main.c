#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

void linha(int n){
    for(int i = 0; i < n; i++){
        printf("-");
        printf("\n");
    }
}


int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

linha(30);
printf("BEM-VINDO AO SISTEMA\n");
linha(30);


return 0;


}