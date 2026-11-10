#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int absoluto(int n){
    if(n < 0){
       return n - n * 2;
    }
}



int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

printf("%d\n", absoluto(-8));
printf("%d\n", absoluto(4));
printf("%d\n", absoluto(0));






return 0;
}