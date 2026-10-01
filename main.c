#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);
int cubo[2][3][4] = {
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
        
    },
    {
        {13, 14, 15, 16},
        {17, 18, 19, 20},
        {21, 22, 23, 24}
    }
};


for(int i = 0; i <= 1; i++){
    for(int m = 0; m <= 2; m++){
        for(int j = 0; j <= 3; j++){
            printf("%d\n", cubo[i][m][j]);
        }
    }
}



return 0;
}
