#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int n;

printf("De que tamanho será a pirâmide: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    for(int j = i; j <= n; j++){
        printf(" ");
    }
 for(int k = 1; k <= (2 * i - 1); k++){
    printf("*");
 }
 printf("\n");
}
 
 return 0;
}