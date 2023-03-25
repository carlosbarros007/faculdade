#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

        int numeroDigitado = 1;
        float somaNumerosPositivos;
        float quantidadeNumerosNegativos;

        printf("digite uma sequencia de numeros, caso queira encerrar digite 0\n");


        while(numeroDigitado != 0){

            scanf("%i", &numeroDigitado);

            if(numeroDigitado > 0){

                somaNumerosPositivos = numeroDigitado + somaNumerosPositivos;

            }else if (numeroDigitado < 0){

                quantidadeNumerosNegativos++;
            }else{

                printf("A brincadeira acabou!!!\n");
            }
        }

        printf("\nA soma dos numeros positivos e: %.0f\n", somaNumerosPositivos);
        printf("A quantidade de numeros negativos foi: %.0f", quantidadeNumerosNegativos);

        return 0;
    }
