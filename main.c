#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
int total = 0;
for(int i = 1; i <= 100; i++){
    int dezena = i / 10;
    int unidade = i % 10;
    if(dezena + unidade == 10){
        printf("%d\n", i);
        total++;
    }
    
}
printf("Total: %d\n", total);
return 0;
}