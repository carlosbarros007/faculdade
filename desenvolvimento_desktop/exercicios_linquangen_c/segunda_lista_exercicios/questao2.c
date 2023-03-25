#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*. Faça um programa que receba a idade de uma pessoa identifique se ela pode retirar o 
título de eleitor votar neste ano. Sabendo que:
a. 16 e 17 anos tem o voto facultativo;
b. 18 a 70 anos voto obrigatório;
c. Acima de 70 anos tem voto facultativo*/

int main(){

    float idade;
    
    printf("qual a sua idade?\n");
    scanf("%f", &idade);


    if (idade < 16 || idade < 18 || idade > 70){

        printf("voce pode tirar o titullo e seu voto e facultativo");
    }else if (idade < 16){

        printf("voce ainda e muito novo");
        
    }else{

        printf("va votar seu vagabumdo!!!");
    }
    
 
}