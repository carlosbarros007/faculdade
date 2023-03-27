#include<stdlib.h>
#include<stdio.h>
#include<math.h>


/*
    2. Faça um programa que com base no número de lados de uma figura geométrica
    informada, apresente o seu respectivo nome.
 */

int main(){

    int ladoInformado;


    printf("informe o numero de lados de uma figura geometrica: ");
    scanf("%i", &ladoInformado);

    switch(ladoInformado){

        case 3:
            printf("o numero de lados e %i\t", ladoInformado);
            printf("temos um triangulo");
            break;

        case 4:
            printf("o numero de lados e %i\t");
            printf("temos um quadrilatero");
            break;

        case 5:
            printf("o numero de lados e %i\t");
            printf("temos um pentagono");
            break;

        case 6:
            printf("o numero de lados e %i\t");
            printf("temos um exagono");
            break;

        default:
            printf("algo deu errado!!! reinicie o programa e tente novamente.");
            break;

    }



}
