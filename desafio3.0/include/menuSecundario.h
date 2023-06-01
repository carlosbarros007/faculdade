


#include <stdio.h>
#include "iniciante.h"





int menu2(){

    int selecaoMenu = 0;
    int temaSelecionado = 0;
    int dificuldadeSelecionada = 0;
    
    printf("1. Jogar novamente\n");
    printf("2. mudar tema e dificuldade\n");
    printf("3. esserra o jogo\n");

    printf("\nDigite o numero corespondente: ");
    scanf("%d", &selecaoMenu);

    switch (selecaoMenu)
    {
    case 1:
        
            printf("\nEscolha o tema:\n");
            printf("1. Programação\n");
            printf("2. Tecnologia\n");
            printf("3. Software\n");
            printf("4. Linguagem\n");
            printf("5. Frameworks\n");
            printf("6. IDEs\n");
            printf("7. Áreas de Tecnologia\n\n");
        
            printf("Digite o número correspondente à opção desejada: ");
            scanf("%d", &temaSelecionado);

            nivelIniciante(temaSelecionado);

        break;
    
    case 2:

            printf("\nEscolha o tema:\n");
            printf("1. Programação\n");
            printf("2. Tecnologia\n");
            printf("3. Software\n");
            printf("4. Linguagem\n");
            printf("5. Frameworks\n");
            printf("6. IDEs\n");
            printf("7. Áreas de Tecnologia\n\n");
        
            printf("Digite o número correspondente à opção desejada: ");
            scanf("%d", &temaSelecionado);

            printf("Escolha a dificuldade:\n");
            printf("1. Iniciante\n");
            printf("2. Intermediário\n");

            printf("Digite o número correspondente à opção desejada: ");
            scanf("%d", &dificuldadeSelecionada);

            switch (dificuldadeSelecionada)
            {
            case 1:
                
                 nivelIniciante(temaSelecionado);
                break;
            
            case 2:
                    // dificuldade intermediario não ta pronto função ira retorna para o menu
                printf("***ops essa funcionalidade ainda não foi inplementada***");

                
            default:

                printf("\nverifique as opções selecionadas e tente novamente, caso o erro percista chame o suporte!!!\n");
             
                break;
            }
            


    default:
        break;
    }

    return 0;
}