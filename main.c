#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

int total = 0;
for(int i = 1; i <= 1000; i++){
    if(i % 7 == 0 && i % 2 != 0){
        total++;
    }
}
printf("Divisiveis por 7 e não por 2: %d\n", total);
return 0;
}