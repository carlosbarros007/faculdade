#include<stdlib.h>
#include<stdio.h>
#include<math.h>

/*
Criar um algoritmo que leia o destino do passageiro, se a viagem inclui retorno 
(ida e volta) e informar o preço da passagem conforme a tabela a seguir:
Destino Ida Ida e Volta
Região Norte R$ 500,00 R$ 900,00
Região Nordeste R$ 350,00 R$ 650,00
Região Centro-Oeste R$ 350,00 R$ 600,00
Região Sul R$ 300,00 R$ 550,00
*/

// por algum motivo essa bagaça não quer funcionar
// a variavel regiao esta zerando sem motivo aparente
// agora ta funcionando, esse linguagem é uma merda!!!
int main(){

    int regiao;
    char idaVolta = 's';
    int passagem = 0;
    
    printf("voce quer uma passagem de ida e volta?\n");
    printf("s - para sim e n - para nao: ");
    scanf("%s",&idaVolta);


    printf("para onde voce esta indo?\n");
    printf("1 - para regiao norte\n");
    printf("2 - para regiao nordeste\n");
    printf("3 - para regiao centro oeste\n");
    printf("4 - para regiao sul\n");
    printf("selecione: ");
    scanf("%i",&regiao);

  
    //printf("teste %i", regiao);

    switch (regiao){
    case 1:
        
       
        if(idaVolta == 's'){
            passagem = passagem + 900;
        }else{
            passagem = 500;
            printf("\n\n%i", passagem);
        }
        break;
    case 2:
        
        if(idaVolta == 's'){
            passagem = 650;
        }else{
            passagem = 350;
        }
        break;
    case 3:
        
        if(idaVolta == 's'){
            passagem = 600;
        }else{
            passagem = 350;
        }
        break;
    case 4:
        
        if(idaVolta == 's'){
            passagem = 550;
        }else{
            passagem = 300;
        }
        break;

    default:

        printf("algo deu errado!!!");
        break;
    }

    printf("\no valor da sua passagem e: %i", passagem);


}