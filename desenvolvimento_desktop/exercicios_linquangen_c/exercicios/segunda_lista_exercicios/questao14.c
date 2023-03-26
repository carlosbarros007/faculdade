#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*.As Organizações Tabajara resolveram dar um aumento de salário aos seus 
colaboradores e lhe contratou para desenvolver o programa que calculará os e ajustes. 
Faça um programa que recebe o salário de um colaborador e o calcule o reajuste 
segundo os critérios abaixo:
salários até R$ 280,00 (incluindo) : aumento de 20%
salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
salários de R$ 1500,00 em diante : aumento de 5%
Após os cálculos informe na tela:
o salário antes do reajuste;
o percentual de aumento aplicado;
o valor do aumento;*/


    

// calcula se pode ou não pegar o emprestimo

float caulculaValorAlmentoSalario( float salario){

      // tabela de reajuste

    float salarioAte280 = 0.20;
    float salarioAte700 = 0.15;
    float salarioAte1500 = 0.10;
    float salarioAcima1500 = 0.5;

    // tabela de salarios

    float salarioMinimo = 280;
    float salarioMedio = 700;
    float salarioIntermediario = 1500;


    // variavel calculo do salario

    float percentualDeReajuste;
    float porcentagemAlmento;
    float salarioFinal;
    

    // caucula o almento do salario

    if (salario <= salarioMinimo ){

        porcentagemAlmento = salario * salarioAte280;
        percentualDeReajuste = 20;   

    }else if (salario > salarioMinimo && salario <= salarioMedio){
       
        porcentagemAlmento = salario * salarioAte700;
        percentualDeReajuste = 15;   

    }else if (salario > salarioMedio && salario <= salarioIntermediario){
        
        porcentagemAlmento = salario * salarioAte1500;
        percentualDeReajuste = 10;

    }else{

        porcentagemAlmento = salario * salarioAcima1500;
        percentualDeReajuste = 5;   
    }

    // calcula o salario final
    salarioFinal = salario + porcentagemAlmento;

    // retorna o resultado 
    return(printf("o valor do seu salario atual e: %.2f\n o fator de reajuste e de: %.0f porcento\n o seu salario apos o reajuste e de: %.2f\n", salario, percentualDeReajuste, salarioFinal));

}

// função principal

int main(void){

    // variaveis de entrada e saida

    float valorSalario;
    float resultadoFinal;
    
    // pega o valor do salario e parcela do emprestimo
    printf("qual o valor do seu salario atual?\n");
    scanf("%f", &valorSalario); 

    // chama a função caulculaValorAlmentoSalario

    resultadoFinal = caulculaValorAlmentoSalario(valorSalario);

    // imprime o resultado final
    printf("%f", resultadoFinal);

    
    return 0;
    
}

// perguntar para professora se a logica esta correta,
// e o proque de estar aparecendo um numero logo apos imprimir o resultado




