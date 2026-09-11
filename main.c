#include<stdio.h>
#include<windows.h>

int main(){

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int numero = 18;
    printf("Qual sua idade: ");
    scanf("%d", &numero);
    if (numero >= 18) {
       
     printf("Você é Maior de Idade");
    }
      else {

        printf("Você é Menor de idade");

      


 return 0;
    }




    

     

       

    
       
    

    return 0;
}