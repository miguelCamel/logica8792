#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    for(int ano = 2000; ano <= 2030; ano++){
        if(ano % 4 == 0){
            printf("%d\n", ano);
        }
    }
return 0;
}