#include<iostream>

int main(){


float a;

std::cout << "Digite um numero: "<<std::endl;
std::cin >> a;

if(a >= 18){
    std::cout<< "Você é maior de idade"<<std::endl;
}else{
    std::cout<< "Você é menor de idade"<<std::endl;
}
return 0;

}