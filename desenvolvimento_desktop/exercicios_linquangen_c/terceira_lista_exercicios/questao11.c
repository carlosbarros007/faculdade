#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

        int contador1 = 0;
        int contador2 = 0;
        int numero;
        float numeroAsteriscos;


        printf("Desnhe um triangulo com asteriscos!");
        printf("digite um numero: ");
        scanf("%i", &numero);

        numeroAsteriscos = numero;

        while(contador1 < numero){

            while(contador2 < numeroAsteriscos){

                printf("*");

                contador2++;

            }


            numeroAsteriscos = numeroAsteriscos - 1;

            printf("\n");
            contador2 = 0;
            contador1++;
        }

        return 0;
    }
