#include<stdio.h>
#include<windows.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

for(int i = 0; i <= 50; i += 2){
    printf("%d\n", i);
}

    return 0;
}