#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*A prefeitura de Cascavel abriu uma linha de crédito para os funcionários estatutários. O 
valor máximo da prestação não poderá ultrapassar 30% do salario bruto. Fazer um 
algoritmo que permita entrar com o salario bruto e o valor da prestação e informar se o 
empréstimo pode ou não ser concedido.*/


// calcula se pode ou não pegar o emprestimo

float caulculaEmprestimo( float salario, float parcela ){

    float porcentagemMaximaSalario = 0.30;

    float caulculoPorcentagemSalario = salario * porcentagemMaximaSalario;

    if(parcela > caulculoPorcentagemSalario){

        return(printf("voce ira comprometer mais de 30 porcento do seu salario, emprestimo negado"));

    }else{

        return(printf("seu empretimo foi aprovado"));
    }

}

// função principal

int main(void){

    // variaveis de entrada e saida

    float valorSalario;
    float valorParcela;
    float resultadoFinal;
    
    // pega o valor do salario e parcela do emprestimo
    printf("qual o valor do seu salario?\n");
    scanf("%f", &valorSalario);

    printf("qual o valor das parcelas?\n");
    scanf("%f", &valorParcela);

    // chama a função caulculaEmprestimo

    resultadoFinal = caulculaEmprestimo(valorSalario, valorParcela);

    // imprime o resultado final
    printf("%f", resultadoFinal);

    
    return 0;
    
}

// perguntar a professora o por que de estar apresentando um valor após imprimir o resultado final.