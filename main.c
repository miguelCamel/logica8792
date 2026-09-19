#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

for(int i = 1; i <= 100; i++){
    printf("%d\n", i);
}
return 0;
}