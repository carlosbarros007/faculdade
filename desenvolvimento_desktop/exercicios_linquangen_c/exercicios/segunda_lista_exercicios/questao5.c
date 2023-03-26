#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Escreva um programa que identifique se um número é par ou impar. Se par apresentar 
a sua raiz quadrada, se impar apresentar sua metade. */

int main(){

    int numero;
    float resultado;
    
    printf("digite um numero!!!\n");
    scanf("%i", &numero);

   if(numero % 2 == 0 ){

    resultado = sqrt(numero);
   }else{

        resultado = numero / 2;
   }
    
    printf("o resultado e: %.1f\n", resultado);
 
} 

/* enviar email para professora sobre por que não esta retornando a metade correta*/