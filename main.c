#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

for(int i = 10; i >= 0; i = i - 2){
    printf("%d\n", i);
}
    return 0;
}