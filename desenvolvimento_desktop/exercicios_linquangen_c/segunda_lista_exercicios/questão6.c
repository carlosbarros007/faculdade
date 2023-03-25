#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia, e R$ 1,00 se 
forem compradas pelo menos 12. Escreva um programa que leia o número de maçãs 
compradas, calcule e escreva o custo total da compra.*/

int main(){

    float quantidadeDeMacas;
    float valorComDesconto = 1.00;
    float valorSemDesconto = 1.30;
    float valorFinal;
    
    printf("quantas macas voce vai comprar?\n");
    scanf("%f", &quantidadeDeMacas);


    if (quantidadeDeMacas < 12){

        valorFinal = quantidadeDeMacas * valorSemDesconto;
      
    }else{

        valorFinal = quantidadeDeMacas * valorComDesconto;
        
    }
 
    printf("valor total: %.2f", valorFinal);
}