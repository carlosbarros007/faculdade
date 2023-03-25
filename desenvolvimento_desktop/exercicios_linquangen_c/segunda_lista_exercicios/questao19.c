#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*.Um posto está vendendo combustíveis com a seguinte tabela de descontos:
Etanol - até 20 litros, desconto de 3% por litro
 acima de 20 litros, desconto de 5% por litro
Gasolina - até 20 litros, desconto de 4% por litro
 acima de 20 litros, desconto de 6% por litro
Escreva um algoritmo que leia o número de litros vendidos e o tipo de combustível 
(codificado da seguinte forma: E-Etanol, G-gasolina), calcule e imprima o valor a ser pago 
pelo cliente sabendo-se que o preço do litro da gasolina é R$ 4,40 e o preço do litro do 
etanol é R$ 2,90.
*/

// faz o calculo da hipotenusa
float calculaDesconto(char combustivel, float quantidadeCombustivel){

    // tabela de preço
    const float valorEtanol = 2.90;
    const float valorGasolina = 4.40;

    // tabela desconto

    const float descontoEtanolAteVintelitros = valorEtanol * 0.3;
    const float descontoEtanolAcimaVinteLitros = valorEtanol * 0.5;

    const float descontoGassolinaAteVinteLitros = valorGasolina * 0.4;
    const float descontoGassolinaAcimaVinteLitros = valorGasolina * 0.6;
    
    // valor a ser pago

    float valorSemDesconto;
    float valorComDesconto;


   
    
   
    if (combustivel != 'g'){    

        // calcula o valor a ser pago com e sem desconto

        if (quantidadeCombustivel <= 20){
        
            valorSemDesconto = valorEtanol * quantidadeCombustivel;
            valorComDesconto = valorSemDesconto - (quantidadeCombustivel * descontoEtanolAteVintelitros);

        }else{

            valorSemDesconto = valorEtanol * quantidadeCombustivel;
            valorComDesconto = valorSemDesconto - (quantidadeCombustivel * descontoEtanolAcimaVinteLitros);

        }
        
        
    }else{

        if (quantidadeCombustivel <= 20){

            valorSemDesconto = quantidadeCombustivel * valorGasolina;
            valorComDesconto = valorSemDesconto - (quantidadeCombustivel * descontoGassolinaAteVinteLitros);

        }else{

            valorSemDesconto = quantidadeCombustivel * valorGasolina;
            valorComDesconto = valorSemDesconto - (quantidadeCombustivel * descontoGassolinaAcimaVinteLitros);

        }
        

    }
   
    return(printf("valor sem desconto %.2f, valor com desconto %.2f\n", valorSemDesconto, valorComDesconto ));
}


int main(void){

    //variaveis de entrada e saida

    char combustivel[1];
    float quantidadeCombustivel;

    float resultadoFinal;


    printf("calcule o seu desconto\n");
    system("pause");

    printf("qual o combustivel escolhido?\n responda 'g' para gasolina e 'e' para etanol ");
    gets(combustivel);

    printf("qual a quantidade em litros abastecida?\n ");
    scanf("%f", &quantidadeCombustivel);
    
 
    

    resultadoFinal = calculaDesconto(combustivel[0], quantidadeCombustivel);
    
    printf("%f", resultadoFinal);

    return 0;
}


// atemção quando o código execulta o ultimo comando aparece um numero que não deveria aparecer e eu não de onde ele veio.

