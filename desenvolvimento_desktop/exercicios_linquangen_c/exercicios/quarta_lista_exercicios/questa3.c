#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/*
    3. Imprima na tela o menu:
    ● C – área de um círculo
    ● R – área de um retângulo
    ● Q – área de um quadrado
    De acordo com a escolha do usuário o programa deve pedir os elementos
    necessários ao cálculo e impressão da área desejada:
    ● Área Círculo = 3.14 * (raio * raio)
    ● Área Retângulo = base . altura
    ● Área quadrado = lado * lado

 */

int main(){


     char escolha;
     float raio;
     float base;
     float altura;
     float lado;
     float resultado;

    printf("CALCULE A AREA DAS FIGURAS GEOMETRICAS!\n");
    printf("C - area circulo\n");
    printf("R - area de um retangulo\n");
    printf("Q - area de um quadrado\n");
    printf("SELECIONE: ");
    fflush(stdin);
    scanf("%s", &escolha);

    switch(escolha){

        case 'c':

            printf("\ndigite o raio: ");
            scanf("%f", &raio);
            resultado = (raio * raio) * 3,14;
            break;

        case 'r':
            printf("\n digite a base e altura: ");
            scanf("%f%f",&base,&altura);
            resultado = base * altura;
            break;

        case 'q':
            printf("\n digite um dos lados: ");
            scanf("%f",lado);
            resultado = lado * lado;
            break;

        default:

            printf("algo deu errado, tente novamente!");
            break;
    }

     printf("\n a area e: %f", resultado );

}
