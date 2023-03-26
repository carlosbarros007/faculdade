#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(){

     // tabela de imposto

     const float descontoIsento = 0;
     const float desconto7_5porcento = 0.075;
     const float descont15porcento = 0.15;
     const float desconto22_5porcento = 0.225;
     const float desconto27_5porcento = 0.275;


     // tabela salario

     const float salarioBase = 1637.11;
     const float salarioMinimo = 2453.50;
     const float salarioMedio = 3231.38;
     const float salarioAlto = 4087.65;



     // variavel de controle

     char confirme = 's';


    // variavel de entrada, processamento e saida

     float desconto;
     float salario;
     float calculoPorcentagem;
     float valorDesconto;
     float SalarioFinal;

     printf("Descubra quanto voce vai pagar de emposto!\n");
     printf("digite o valor do seu salario: ");


     while(confirme != 'n'){

         scanf("%f", &salario);

         if(salario <= salarioBase){

             calculoPorcentagem = 0;
             SalarioFinal = salario;
             desconto = 0;
             printf("\nvoce esta isento de pagar imposto!\n");

        }else if(salario > salarioBase && salario <= salarioMinimo){

             calculoPorcentagem = salario * desconto7_5porcento;
             SalarioFinal = salario - calculoPorcentagem;
             desconto = 100 * desconto7_5porcento;


        }else if(salario > salarioMinimo && salario < salarioMedio){

             calculoPorcentagem = salario * descont15porcento;
             SalarioFinal = salario - calculoPorcentagem;
             desconto = 100 * descont15porcento;


        }else if(salario > salarioMedio && salario < salarioAlto){

             calculoPorcentagem = salario * desconto22_5porcento;
             SalarioFinal = salario - calculoPorcentagem;
             desconto = 100 * desconto22_5porcento;


        }else if(salario > salarioAlto){

             calculoPorcentagem = salario * desconto27_5porcento;
             SalarioFinal = salario - calculoPorcentagem;
             desconto = 100 * desconto27_5porcento;
        }



             printf("\nO valor do seu salario sem desconto e: %.2f\n", salario);
             printf("O sera aplicado um desconto de %.1f porcento\n", desconto);
             printf("O valor do seu salario apos o desconto e de: %.2f\n", SalarioFinal);
             printf("o total descontado foi de: %.2f\n", calculoPorcentagem);



             printf("\ndeseja execultar uma nova consulta digite 's' par sim e 'n' para nao:  " );
             scanf("%c", &confirme);


    }

    printf("encerrando o sistema!");

    return 0;

}

// perguntar para a professora o porque aparti da segunda execucao do while o scanf nao esta rodando.
