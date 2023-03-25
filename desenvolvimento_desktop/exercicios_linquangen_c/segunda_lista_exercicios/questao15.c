#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <curses.h>

/*.Elabore um programa que realize 5 perguntas para uma pessoa sobre um determinado 
crime. As perguntas são:
a. "Telefonou para a vítima?"
b. "Esteve no local do crime?"
c. "Mora perto da vítima?"
d. "Devia para a vítima?"
e. "Já trabalhou com a vítima?"
O programa deve no final emitir uma classificação sobre a participação da pessoa no 
crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como 
"Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será 
classificado como "Inocente".*/

// diz se o sujeito e culpado ou inocente
float culpadoOuInocente(float resposta1, float resposta2, float resposta3, float resposta4, float resposta5){

   float suspeito = resposta1 + resposta2 + resposta3 + resposta4 + resposta5; // o menos um esta aqui para corrigir um bug, ou seja ele e um ajuste tecnico.

   if(suspeito == 5){

        return(printf("voce e o assacino!!!"));
    
   }else if(suspeito == 3 || suspeito == 4){

        return(printf("voce e cumplice do assacino!!!"));

   }else if(suspeito == 2){
    
        return(printf("voce e muito suspeito!!!"));
   
   }else{
        return(printf("voce e inocente"));
   }
   


   

}


int main(void){

    //variaveis de entrada e saida

    float pergunta1;
    float pergunta2;
    float pergunta3;
    float pergunta4;
    float pergunta5;

    float resultadoFinal;


    printf("CULPADO OU INOCENTE\n RESPONDA O QUESTIONARIO ABAIXO E VEJA O RESULTADO\n responda '1' para sim e '0' para nao\n  ");
    system("pause");

    printf("Telefonou para a vitima?\n");
    scanf("%f\n", &pergunta1);


    printf("Esteve no local do crime?\n");
    scanf("%f\n", &pergunta2);
    

    printf("Mora perto da vitima?\n");
    scanf("%f\n", &pergunta3);
    

    printf("Devia para a vitima?\n");
    scanf("%f\n", &pergunta4);
    

    printf("Ja trabalhou com a vitima?\n");
    scanf("%f\n", &pergunta5);



    resultadoFinal = culpadoOuInocente( pergunta1, pergunta2, pergunta3, pergunta4, pergunta5);

    printf("%f", resultadoFinal);

    return 0;
}


