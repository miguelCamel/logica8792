#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

void cont(int n){
    if(n == 0){
        return;
    }
    cont(n - 1);
    printf("%d\n", n);

}
int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
cont(5);

return 0;
}