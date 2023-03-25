#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*.Entrar com o salario de uma pessoa e imprimir o desconto do INSS segundo a tabela a 
seguir:
Menor ou igual a R$ 600,00 Isento
Maior que R$ 600,00 e menor ou igual a R$ 1200,00 20%
Maior que R$ 1200,00 e menor ou igual a R$ 2000,00 25%
Maior que R$ 2000,00 30%*/

int main(){
    // variaveis de entrada e saida
    
    float salario;
    float descontoInss;
    float valorFinalSalario;

    // variaveis porcentagem do inss

    float descontoAte1200 = 0.20;
    float descontoAte2000 = 0.25;
    float descontoMaiorQue2000 = 0.30;

    // pega o valor do salario

    printf("qual o seu salario?\n");
    scanf("%f", &salario);

    // calcula o desconto inss

    if(salario > 600 && salario <= 1200){

        descontoInss = salario * descontoAte1200; 
        valorFinalSalario = salario - descontoInss;

    }else if (salario > 1200 && salario <= 2000)
    {
        descontoInss = salario * descontoAte2000; 
        valorFinalSalario = salario - descontoInss;

    }else if (salario > 2000){

        descontoInss = salario * descontoMaiorQue2000; 
        valorFinalSalario = salario - descontoInss;
        
    }
    
    // mostra o resultado

    if (salario <= 600)
    {
        printf("seu salario e de: %.2f\n e voce nao tem desconto do inss", salario);
    }else{
        printf("o seu salario e de: %.2f\n o desconto do inss e de: %.2f\n seu salario apos o desconto: %.2f", salario, descontoInss, valorFinalSalario );
    }

    
}