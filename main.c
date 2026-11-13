#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
for(int i = 1; i <= 100; i++){
    if(i % 4 == 0){
        printf("%d\n", i);
    }
}
return 0;
}