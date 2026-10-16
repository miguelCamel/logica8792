#include<iostream>
#include<windows.h>
#include<string>



int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

int escolha;

std::cout<< "Você deseja ver o alfabeto? [1]Sim [2]Não"<<std::endl;
std::cin>> escolha;

if(escolha == 1){
    std::cout<<"A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y e Z"<<std::endl;
}else if(escolha == 2){
    std::cout<< "Ok, tenha um bom dia"<<std::endl;
}else{
    std::cout<<"Apenas 1 ou 2"<<std::endl;
}

return 0;

}