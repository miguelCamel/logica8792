#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

int total = 0;
  for(int i = 1; i <= 200; i++){
    if(i % 10 == 3){
        printf("%d\n", i);
        total++;
    }
  }
  printf("\nTotal: %d\n", total);
return 0;
}