#include<iostream>
#include<windows.h>

int soma(int f, int g){

    return f + g;
    
}

int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


int a, b;

std::cout << "Digite o primeiro número:  "<<std::endl;
std::cin >> a;

std::cout << "Digite o segundo número: "<<std::endl;
std::cin >> b;

std::cout<< a << "+" << b << "=" << soma(a, b) <<std::endl;


return 0;

}