#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Para doar sangue é necessário ter idade entre 18 e 67 anos e peso superior a 50 Kg. 
Faça um programa que pergunte a idade e peso de uma pessoa e diga se ela pode doar 
sangue ou não.*/

int main(){

    float idade;
    float pesso;
    
    printf("qual a sua idade?\n");
    scanf("%f", &idade);

    printf("qual o seu pesso?\n");
    scanf("%f", &pesso);


    if (idade < 18 || idade > 67 || pesso < 50){

        printf("voce nao pode doar sangue!!!\n");

    }else{
        printf("voce pode doar sanque!!!\n");
    }
    
 
}