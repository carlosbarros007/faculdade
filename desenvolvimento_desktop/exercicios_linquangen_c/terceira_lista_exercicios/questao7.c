#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

        int contador = 1;

        float soma;

        while( contador <= 500 ){

            // pergunta se o numero e impar e mutiplo de 3.

            if(contador % 2 != 0 && contador % 3 == 0){

                printf("%i\t", contador);

                soma = soma + contador; // soma os numeros
            }

            contador++;

        }

        printf("\na soma dos numeros impares mutiplos de 3 do 1 ao 500 e: %.0f", soma); // imprime o resultado



        return 0;
    }
