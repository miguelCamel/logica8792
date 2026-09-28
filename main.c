#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int tabuada, n;

for(int m = 1; m <= 10; m++){
for(int i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", m, i, i * m);



}
printf("\n");


}

    return 0;
}