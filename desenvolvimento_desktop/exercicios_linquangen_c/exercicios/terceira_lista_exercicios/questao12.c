#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

        int contador = 1;
        int contador2 = 0;

        printf("os cinco primeiros numeros mutiplos de 3 sao: ");


        while(contador > -1){

            contador++;

            if(contador % 3 == 0){

                printf("%i\n", contador);

                contador2++;

                if(contador2 == 5){

                    contador = -1;
                }
            }



        }

        return 0;
    }
