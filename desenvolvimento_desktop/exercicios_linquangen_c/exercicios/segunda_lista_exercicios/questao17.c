#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*.A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que 
trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular 
com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas 
trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, que 
deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o 
mês possua 4 semanas exatas).*/

// faz o calculo das horas extras
float calculaHorasExtras(float salario, float horas){

    // total de horas a serem trabalhadas no mes
    const float totalDeHorasMes = 160;


    if (horas == totalDeHorasMes){
        
        return(printf("voce nao fez horas extras esse mes, o seu salario e: %.2f\n", salario));

    }else if (horas < totalDeHorasMes){

        return(printf("voce esta devendo horas, esse mes nao sera descontado, caso nao paque as horas devidas no mes que vem descontaremos do seu salario.\n"));
        
    }else{
        
        // calcula o valor da hora
        float valorDaHoraExtra = (salario / totalDeHorasMes) * 0.50;

        // calcula o numero de horas extras e o valor a ser passado a mais no salario
        float calculoDasHorasExtras = (horas - totalDeHorasMes) + valorDaHoraExtra;

        // calcula o valor do salario com as horas
        float salarioComHorasExtras= salario + calculoDasHorasExtras;

        return(printf("o valor total das suas horas e: %.2f\n seu salario com as horas e de:%.2f\n", calculoDasHorasExtras, salarioComHorasExtras));

    }
    
    



}


int main(void){

    //variaveis de entrada e saida

    float salario;
    float numeroDeHorasTrabalhadas;
    float resultadoFinal;


    printf("calcule o valor das suas horas extras!!!\n");
    system("pause");

    printf("qual o valor do seu salario?\n");
    scanf("%f", &salario);

    printf("quantas horas fez no mes?\n");
    scanf("%f", &numeroDeHorasTrabalhadas);

    resultadoFinal = calculaHorasExtras(salario, numeroDeHorasTrabalhadas);

    printf("%f", resultadoFinal);

    return 0;
}

// perguntar a professora a melhor forma de retorna um printf em uma função.


