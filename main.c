#include<stdio.h>
#include<windows.h>
#include<string.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

for(int i = 0; i < 10000; i++){
    printf("%s\n", "Te amo");
    i++;
}
printf("\nMeu For funciounou!!!");
return 0;
}