#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que receba um número e identifique se ele é positivo ou negativo. Se 
positivo apresente o triplo deste numero, se negativo apresente ele elevado ao quadrado.*/

int main(){

    float numeroDigitado;
    float resultado;
    printf("digite um numero!\n");
    scanf("%f", &numeroDigitado);


    if (numeroDigitado < 0){

        resultado = numeroDigitado * numeroDigitado;
    }else{
        resultado = numeroDigitado * 3;
    }
    
    printf("o resultado e: %.0f", resultado);
}