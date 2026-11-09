#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

void cont(int n){
for(int i = n; i >= 1; i--){
printf("%d\n", i);
}
printf("Fogo!");
}
int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
cont(5);

return 0;
}