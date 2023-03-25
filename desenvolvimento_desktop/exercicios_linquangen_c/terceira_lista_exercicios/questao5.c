#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

        int numeroDigitado;
        int multiplica;
        int controle = 0;

        printf("digite um numero e veja o que acontece: ");
        scanf("%i", &numeroDigitado);

        while(controle <10){

            multiplica = controle * numeroDigitado; // multiplica numero digitado para obter a tabuada
            controle++; // variavel contador

            printf("%i vezes %i : %i\n", numeroDigitado, controle, multiplica); // mostra o resultado



        }








    }
