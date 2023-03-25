#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(){

     int numeroDigitado;


     while(numeroDigitado >= 0){

         printf("digite um numero inteiro!! ");
         scanf("%i", &numeroDigitado);

         printf("\no ultimo numero digitado foi %i\n", numeroDigitado);
    }

    return 0 ;
}
