#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

    int numero;
    int saida;
    int controle = 0;
    float mediaSaida = saida / controle;

    printf("digite dez numeros: ");

    while(controle <= 10){

        scanf("%i", &numero);

        saida = numero + saida;

        controle++;


    }

    printf("a media dos numeros digitados e %f", mediaSaida);
        return 0;
    }
