#include<stdlib.h>
#include<stdio.h>
#include<math.h>

    /*
        4. Criar um programa para identificar o valor a ser pago por um plano de saúde dada
        a idade do conveniado considerando que todos pagam R$ 100 mais um adicional
        conforme a seguinte tabela:
        a. crianças com menos de 10 anos pagam R$80;
        b. conveniados com idade entre 10 e 30 anos pagam R$50;
        c. conveniados com idade entre 40 e 60 anos pagam R$ 95; e
        d. conveniados com mais de 60 anos pagam R$130.
     */

int main(){

    int idade = 0;
    int convenio = 100;

    printf("digite:\n");
    printf("10 - para idade menor ou iqual a 10 anos\n" );
    printf("30 - para idade entre 10 e 30 anos\n");
    printf("40 - para idade entre 40 e 60 anos\n");
    printf("60 - para idade maior que 60 anos\n");
    printf("selecione a sua idade:");
    scanf("%i", &idade);

    switch(idade){

        case 10:
            convenio = convenio + 80;
            break;

        case 30:
            convenio = convenio + 50;
            break;

        case 40:
            convenio = convenio + 95;
            break;

        case 60:
            convenio = convenio + 130;
            break;

        default:
            printf("algo deu errado!");
            break;
    }

    printf("seu plano fica %i reais", convenio);
}
