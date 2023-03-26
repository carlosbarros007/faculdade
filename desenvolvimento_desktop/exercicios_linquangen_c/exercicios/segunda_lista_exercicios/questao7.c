#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Entrar com nome, sexo e idade de uma pessoa. Se a pessoa for do sexo feminino e tiver 
menos que 25 anos, imprimir nome e a mensagem: ACEITA. Caso contrário imprimir 
nome e a mensagem: NÃO ACEITA.*/

int main(){
    int idade;

    char nome[20];
    int sexo;
    
    printf("qual o seu nome?\n");
    gets(nome);

    printf("qual o seu sexo?\n responda '0' para masculino\n e '1' para femminino\n ");
    scanf("%i", &sexo);

    printf("qual a sua idade?\n");
    scanf("%i", &idade);


    if (idade < 25 && sexo == 1){

       printf("parabens %s, voce foi aprovada!!!", nome);

    }else{
        printf("voce nao foi aprovado");
    }
    
   
}