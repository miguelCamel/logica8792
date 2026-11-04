#include<stdio.h>
#include<windows.h> 
#include<string.h>
#include<stdlib.h>
#include<time.h>



int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int m[2][3] = {
    {1, 2, 3},
    {7, 8, 9}
};

int t[3][2];
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        t[j][i] = m[i][j];
    }
    
}
printf("Original (2x3)\n");
for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
        printf("%d", m[i][j]);
    }
    printf("\n");
}
printf("\nTransporta (3x2):\n");
for(int i = 0; i < 3; i++){
    for(int j = 0; j < 2; j++){
        printf("%d", t[i][j]);
    }
    printf("\n");
}

}