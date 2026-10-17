#include<stdio.h>
#include<windows.h>
#include<string.h>



int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int n;
printf("Digite N: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    printf("%d\n", i);
}

return 0;
}