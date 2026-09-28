#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n;

printf("De que tamanho será o quadrado: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        printf("* ");
    }
 printf("\n");
}
 
 return 0;
}