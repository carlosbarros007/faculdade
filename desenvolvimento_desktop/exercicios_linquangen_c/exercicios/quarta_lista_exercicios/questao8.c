#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/*
8. Crie um algoritmo que execute as funcionalidades da conta corrente de uma 
pessoa. Toda a conta tem um número, uma pessoa vinculada e um saldo. O saldo 
é atualizado conforme o tipo de movimentação bancária: depósito ou retirada. Se 
for um depósito, o dinheiro é creditado ao saldo; se for retirada, o dinheiro é 
debitado do saldo
*/

int main(){

    int numeroContaInformado;
    int numeroConta = 000;
    float saldo = 100;
    float valorInformado;
    char operacao = 'n';
    int operacao2;

    printf("banco ceara!!!\n");
    printf("deseja fazer uma operacao?\n");
    printf("digite s - para sim e n - para nao: ");
    scanf("%s", &operacao);

    if (operacao == 's'){
        
        printf("digite o numero da sua conta: ");
        scanf("%i", &numeroContaInformado);

        if (numeroConta == numeroContaInformado)
        {
            printf("qual operação deseja executar?");
            printf("digite 1 - para sacar, 2 - para depositar e 3 - para consulta saldo: ");
            fflush(stdin);
            scanf("%d", &operacao2);


            switch (operacao2){
            case 1:
                
                printf("qual valor deseja sacar?\n");
                printf("digite:");
                scanf("%f", &valorInformado);
                
                if (valorInformado > saldo){
                    printf("\nsaldo insuficiente!!!");

                }else{
                    saldo = saldo - valorInformado;
                    printf("\no valor %f foi retirado.\n", valorInformado);
                    printf("seu saldo atual e: %f", saldo);
                }
            
                break;
            case 2:

                printf("qual valor deseja depositar?\n");
                printf("digite:");
                scanf("%f", &valorInformado);

                if (valorInformado <= 0){

                    printf("valor invalido!!!");
                }else{
                    saldo = saldo + valorInformado;
                    printf("seu novo saldo e: %f", saldo);
                }

                break;

            case 3:

                printf("seu saldo atual e de: %f", saldo);
                break;
                
            default:

                printf("algo deu errado!!!");
                break;
            }
        }else{
            printf("o numero da conta esta errado!!!");
        }
        
    }else{
        printf("ate logo!!!");
    }
    
}
