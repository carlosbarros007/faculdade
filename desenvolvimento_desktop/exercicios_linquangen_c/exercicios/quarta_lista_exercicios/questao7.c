#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/*
Faça um programa que leia seu peso na Terra e o numero de um planeta e calcule 
qual será seu peso neste planeta. A relação de planetas é:
Nº Planeta Gravidade Relativa
1 Mercúrio 0,37
2 Vênus 0,88
3 Marte 0,38
4 Júpiter 2,64
5 Saturno 1,15
6 Urano 1,17
A fórmula para o cálculo do peso em outro planeta, considerando a gravidade 
relativa de cada um deles é;

*/

int main(){

    int planetaSelecionado;
    float masa;
    float resultado;


    printf("calcule seu peso em outro planeta\n");
    printf("1 - mercurio\n");
    printf("2 - venus\n");
    printf("3 - marte\n");
    printf("4 - jupiter\n");
    printf("5 - saturno\n");
    printf("6 - urano\n");
    printf("selecione: ");
    scanf("%i", &planetaSelecionado);


    printf("digite seu peso:");
    scanf("%f", &masa);
    
    switch (planetaSelecionado){
    case 1:
        
        resultado = masa * 0.37;
        break;

    case 2:
        
        resultado = masa * 0.88;
        break;

    case 3:
        
        resultado = masa * 0.38;
        break;

    case 4:
        
        resultado = masa * 2.64;
        break;

    case 5:
        
        resultado = masa * 1.15;
        break;

    case 6:
        
        resultado = masa * 1.17;
        break;
    
    default:

        printf("algo deu errado!!!");
        break;
    }

    printf("o seu peso no planeta selecionado e: %f", resultado);

}