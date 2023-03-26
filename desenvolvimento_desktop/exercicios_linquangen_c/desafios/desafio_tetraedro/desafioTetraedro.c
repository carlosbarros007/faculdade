#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){


        int numeroInformado = 0;
        int contagemBolasCanhao = 0;
        int numeroBolas;
        int resultadoFinal=0;

        printf("digite um numero:");
        scanf("%i", &numeroInformado);
        
        numeroBolas = numeroInformado; // passa o valor de numeroInformado para numeroBolas para executar o primeiro loop

       while (numeroInformado > 0){

            while (numeroBolas > 0){

                contagemBolasCanhao = contagemBolasCanhao + numeroBolas; // conta o numero de bolas de canhão
                numeroBolas = numeroBolas - 1; // decrementa 1 do valor de numero bolas para no proximo loop fazer a contagem correta
            }

            numeroInformado = numeroInformado - 1; // drecrementa 1 a cada loop para fazer a contagem das camadas
            numeroBolas = numeroInformado; // reinicia a variavel numeroBolas para iniciar o proximo loop

       }
       

        printf("o nomero de bolas e: %i\n", contagemBolasCanhao);
        return 0;
    }