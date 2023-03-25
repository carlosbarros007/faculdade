#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*Faça um programa que leia os lados de um triângulo retângulo e exiba sua hipotenusa 
se e a hipotenusa for maior que 100 apresente na tela, “hipotenusa excede o tamanho 
permitido para área”, caso contrário exiba “hipotenusa aceita*/

// faz o calculo da hipotenusa
float calculoIpotenusa(float cateto1, float cateto2){

    // calcula o quadrado dos catetos e faz a soma

    float somaQuadradoCatetos = (cateto1 * cateto1) + (cateto2 * cateto2);
    

    // resultado final hipotenusa
    float resultado= sqrt(somaQuadradoCatetos);

    return (resultado);

}


int main(void){

    //variaveis de entrada e saida

    float valorCateto1;
    float valorCateto2;
    float resultadoFinal;


    printf("calcule a hipotenusa!!!!\n");
    system("pause");

    printf("digite o valor dos catetos!!!\n");
    scanf("%f %f", &valorCateto1, &valorCateto2);

    resultadoFinal = calculoIpotenusa(valorCateto1, valorCateto2);

    printf("%.2f", resultadoFinal);

    return 0;
}




