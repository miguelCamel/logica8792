#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

  for(int i = 1; i <= 200; i++){
    if(i % 10 == 3){
        printf("%d\n", i);
    }
  }
return 0;
}