#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

    int controle = 1;
    int numerodigitado;
    int somaNumerosDigitados;
    int resultadoMedia;

    printf("digite dez numeros inteiros:");

    while(controle <=10){

        scanf("%i", &numerodigitado );

        somaNumerosDigitados = somaNumerosDigitados + numerodigitado;

        controle++;

    }

        resultadoMedia = somaNumerosDigitados / controle;

        printf("A media dos numeros digitados e: %i", resultadoMedia );


    }
