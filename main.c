#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);


int contador = 0;


for( int i = 0; i <= 9; i++){
    for(int j = 0; j <= 9; j++ ){
        for(int m = 0; m <= 9; m++){
            for(int a = 0; a <= 9; a++){
                contador++;
                 printf("Combinação: %d %d %d %d\n", i, j, m, a);
                    }
                        }
                            } 
                                }
                                printf("Há: %d", contador);
    return 0;
}