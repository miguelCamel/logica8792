#include<iostream>


int main(){

    float n1, n2, n3, resultado = 0;

    std::cout<< "Digite a primeira nota: " <<std::endl;
    std::cin >> n1;

    std::cout<< "Digite a segundo nota: " <<std::endl;
    std::cin >> n2;

    std::cout<< "Digite a terceira nota: "<<std::endl;
    std::cin >> n3;

    resultado = (n1 + n2 + n3) / 3;

    std::cout<< "Sua media e: "<< resultado<< std::endl;


}