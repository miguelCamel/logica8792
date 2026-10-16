#include<iostream>
#include<windows.h>
#include<string>

struct pessoa{
    char nome[50];
    int idade;
    float altura;
    float peso;
};



int main(){
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


struct pessoa p1;
std::cout<<"Digite seu nome: "<<std::endl;
std::cin>> p1.nome;

std::cout<< "Digite sua idade: "<<std::endl;
std::cin>> p1.idade;

std::cout<< "Digite sua altura: "<<std::endl;
std::cin>> p1.altura;

std::cout<<"Digite seu peso: "<<std::endl;
std::cin>> p1.peso;

std::cout<<"Nome: " << p1.nome << "\n" << "Idade: " << p1.idade << "\n" << "Altura: " << p1.altura << "\n" << "Peso: " << p1.peso<<std::endl;


return 0;

}