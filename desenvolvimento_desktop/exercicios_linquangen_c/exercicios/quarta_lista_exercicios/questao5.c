#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*
5. Fazer um algoritmo que leia o percurso em quilômetros, o tipo do carro e informe 
o consumo estimado de combustível, sabendo-se que um carro tipo A faz 12km 
com um litro de gasolina, um tipo B faz 9km e o tipo C, 8km por litro.
*/

int main(){

    float distancia = 0;
    float tipoVeiculoA = 12;
    float tipoVeiculoB = 9;
    float tipoVeiculoC = 8;
    float resultado;
    char escolha;

   
    printf("A - para veiculo que faz 12 km/l\n");
    printf("B - para veiculo que faz 9 km/l\n");
    printf("C - para veiculo que faz 8 km/l\n");
    printf("Selecione: \n");
    fflush(stdin);
    scanf("%s", &escolha);

    printf("\ndigite a distancia a ser percorrida: ");
    scanf("%f", &distancia);

    switch(escolha){

        case 'a': 
            resultado = distancia / tipoVeiculoA;
            break;
        case 'b': 
            resultado = distancia / tipoVeiculoB;
            break;
        case 'c': 
            resultado = distancia / tipoVeiculoC;
            break;
        default:
            printf("algo deu errado!!!");
            break;

    }
    
    printf("voce vai precisar de %f litros de combustivel", resultado);

}
