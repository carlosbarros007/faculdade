#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se o valor 
da compra for menor que R$ 20,00; caso contrário, o lucro será de 30%. Entrar com o 
valor do produto e imprimir o valor da venda.*/

int main(){

    float valorDoProduto;
    float valorPorcentagem1 = 0.45;
    float valorPorcentagem2 = 0.30;
    float calculoPorcentagem;
    float valorfinal;

    printf("digite o valor do produto!\n");
    scanf("%f", &valorDoProduto);


    if (valorDoProduto <= 20){

        calculoPorcentagem = valorDoProduto * valorPorcentagem1;
        valorfinal = valorDoProduto + calculoPorcentagem;
       
    }else{

        calculoPorcentagem = valorDoProduto * valorPorcentagem2;
        valorfinal = valorDoProduto + calculoPorcentagem;
    }
    
    printf("o valor final e: %.2f", valorfinal);
}