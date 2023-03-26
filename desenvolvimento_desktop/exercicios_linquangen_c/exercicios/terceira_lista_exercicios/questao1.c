#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int controle = 0;
    int saida;

    while(controle <= 50){

        controle++;

        saida = controle %2;

        if(saida == 0){

            printf("%d\n", controle);
        }

        
    }
} 
