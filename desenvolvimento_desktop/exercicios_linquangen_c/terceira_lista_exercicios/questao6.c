#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    int main(){

    // variaveis de controle
    int controle = 0;
    float contadorHomens = 0;
    float contadorMulheres = 0;

    // variaveis de entrada
    char sexo;
    float peso;
    float altura;

    // variaveis de processamento
    float pesoMulheres;
    float alturaMulheres;
    float pesoHomems;
    float alturahomems;

    //variaveis de saida
    float mediaAlturaHomens;
    float mediaPesoHomens;
    float mediaAlturaMulheres;
    float mediaPesoMulheres;



    printf("digite o sexo a altura e o peso de dez pessoas e calcule suas media.");


    while(controle <=2){


        scanf("%c%f%f", &sexo, &altura, &peso);

        if(sexo == 'f'){

            pesoMulheres = peso + pesoMulheres;
            alturaMulheres = altura + alturaMulheres;
            contadorMulheres++;


        }else if(sexo == 'm'){

            pesoHomems = peso + pesoHomems;
            alturahomems = alturahomems + altura;
            contadorHomens++;

        }else{

            printf("valor invalido, digite novamente\n");

            controle--;

        }

        controle++;
    }

      // calcula a media

      mediaAlturaHomens = alturahomems / contadorHomens;
      mediaPesoHomens = pesoHomems / contadorHomens;
      mediaAlturaMulheres = alturaMulheres / contadorMulheres;
      mediaPesoMulheres = pesoMulheres / contadorMulheres;



        printf("\nA media da altura masculinas e: %.2f\n", mediaAlturaHomens );
        printf("A media do peso masculino e: %.2f\n", mediaPesoHomens);

        printf("\nA media da altura feminina e: %.2f\n", mediaAlturaMulheres);
        printf("A media do peso feminino e: %.2f", mediaPesoMulheres);

    }
