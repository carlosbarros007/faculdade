#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*.Tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa, calcule 
e mostre seu peso ideal, utilizando as seguintes fórmulas:
a. para sexo masculino: peso ideal = (72.7 * altura) - 58
b. para sexo feminino: peso ideal = (62.1 * altura) - 44.7*/

// faz o calculo do pesso ideal
float calculoPesoIdeal( char sexo, float altura){

    float pesoIdeal;

    if (sexo != 'm'){
      
        pesoIdeal = (62.1 * altura) - 44.7;

    }else{

        pesoIdeal = (72.7 * altura) - 58;

    }

   return(pesoIdeal);
   
}


int main(void){

    //variaveis de entrada e saida

    char nome[21];
    char sexo[1];
    float altura;
  
    float resultadoFinal;


    // pega os dados
    printf("calcule o seu imc\n");
    system("pause");

    printf("qual o seu nome?\n");
    gets(nome);
    
    printf("qual o seu sexo\n");
    gets(sexo);

    printf("qual a sua altura?\n");
    scanf("%f", &altura);


    // chama a função calculoPesoIdeal
    resultadoFinal = calculoPesoIdeal(sexo[0], altura);

    // imprime o resultado
    printf(" %s, o seu peso ideal e: %.2f\n", nome, resultadoFinal);

    return 0;
}

// por algum motivo desconhecido o nome não esta sendo imprimido na tela



