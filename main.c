#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>

<<<<<<< HEAD
=======
int soma(int n1, int n2){
    return n1 + n2;
}

>>>>>>> 37b5584eb250dd07aa24bda1716d25393e5e2845

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

<<<<<<< HEAD
int n;
printf("Digite N: ");
scanf("%d", &n);

for(int i = 1; i <= n; i++){
    for(int j = 1; j <= n; j++){
        printf("* ");
    }
    printf("\n");
}
=======
soma(5, 6);

>>>>>>> 37b5584eb250dd07aa24bda1716d25393e5e2845

return 0;
}