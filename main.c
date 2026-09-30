#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int v[10];
for(int i = 0; i < 10; i++){
    printf("Digite o valor %d: ", i + 1);
    scanf("%d", &v[i]);
}
printf("Valor invertido: \n");
for(int i = 9; i >= 0; i--){
    printf("%d", v[i]);
}
printf("\n");
    return 0;
}
