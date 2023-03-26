#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/* 

    SUPER CONTADOR DO WALLE: 21032023.1
    Desenvolvido: Carlos Barros
    GitHub: https://github.com/carlosbarros007

*/

    // calcula o numero de bolas de canhão

    int calculaBolasCanhao(int numero){

         int contagemBolasCanhao = 0;
         int contadoraCamadas = numero;
         int contadoraBolas = numero;


         while (contadoraCamadas > 0){

            while (contadoraBolas > 0){

                contagemBolasCanhao = contagemBolasCanhao + contadoraBolas; // conta o numero de bolas de canhão
                contadoraBolas = contadoraBolas - 1; // decrementa 1 do valor de contadora bolas para no proximo loop fazer a contagem correta
            }

            contadoraCamadas = contadoraCamadas - 1; // drecrementa 1 a cada loop para fazer a contagem das camadas
            contadoraBolas = contadoraCamadas; // reinicia a variavel numeroBolas para iniciar o proximo loop

       }

       return contagemBolasCanhao;


    }

    int main(void){


        int numeroDigitado;
        int resultadoFinal;
        char condicao = 's';

        int contagem = 0;
        
        printf("SEJA BEM VINDO! AO SUPER CONTADOR DO WALLE\n\n");
        printf("calcule o a quantidade de esferas dentro de uma estrutura tetraedro\n");


        do
        {


            switch (contagem){

                case 0 : 
                    
                    printf("digite um numero e veja a magica acontecer: ");

                    break;
                case 1 : 

                    printf("\nbeleza vamos contar de novo!!!:");

                    break;
                
                case 2 : 

                    printf("\ne la vamos nos, mais uma vez!!!:");

                    break;

                case 3 : 

                    printf("\nEU SO VOU CONTAR MAIS ESSA VEZ!!!:");

                    break;

                case 4 :
                    printf("\nbeleza eu vou contar so mais uma vez!!!:");

                    break;

                default:

                    printf("TCHAU, FOI DIVERTIDO!!!");

                    condicao = 'n';

                    break;
            }


            if(contagem <= 4){
                
                scanf("%i",&numeroDigitado);

                resultadoFinal = calculaBolasCanhao(numeroDigitado);

                printf("\nO numero de bolas possiveis e: %i\n", resultadoFinal);

                printf("\nDeseja fazer mais uma contagem?\n");
                printf("digite 's' para sim e 'n' para nao: ");
                fflush(stdin);
                scanf("%s", &condicao);
            }

            contagem = contagem + 1;
            
        } while (condicao == 's');
        
        return 0;
    }