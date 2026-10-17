#include<stdio.h>
#include<windows.h>
#include<string.h>



int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int n;
printf("Digite N: ");
scanf("%d", &n);

if(n < 0){
    printf("Apenas positivos!");
}else{
    for(int i = 1; i <= n; i++){
  printf("O resultado de %d x %d = %d\n", n, i, n * i);
    }
}
return 0;
}