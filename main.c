#include<stdio.h>
#include<windows.h>

int main(){
SetConsoleOutputCP(65001);
SetConsoleCP(65001);

float a, b, c;

printf("Digite os três lados do triângulo: ");
scanf("%f %f %f", &a, &b, &c);

if(a == b && b == c){
    printf("Equilatero!\n");
}else if(a == b || a == c || b == c){
    printf("Isosceles!\n");
}else{
    printf("Escaleno\n");

}

return 0;
}
