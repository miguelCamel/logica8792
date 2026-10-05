#include<stdio.h>
#include<windows.h>

int main(){

SetConsoleOutputCP(65001);
SetConsoleCP(65001);

int voto;

printf("10-Manoel\n 20-Carla\n 30-Bianca\n 40-Henrique\n 50-Bruno\n");
printf("DIGITE SEU VOTO AGORA:");
scanf("%d", &voto);

if(voto == 10){
    printf("VOTO ARMAZENADO. CADIDATO: MANOEL");
}else if(voto == 20){
    printf("VOTO ARMAZENADO. CANDIDATA: CARLA");
}else if(voto == 30){
    printf("VOTO ARMAZENADO. CANDIDATA: BIANCA");
}else if(voto == 40){
    printf("VOTO ARMAZENADO. CANDIDATO: HENRIQUE");
}else if(voto == 50){
    printf("VOTO ARMAZENADO. CANDIDATO: BRUNO");
}else{
printf("VOTO ARMAZENADO. CANDIDATO: NULO");
}

    return 0;
}