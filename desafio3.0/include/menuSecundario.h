
#include <stdio.h>

typedef struct {
    int tema;
    int dificuldade;
} subMenu;


subMenu menu2(){

    int selecaoMenu = 0;
    int temaSelecionado = 0;
    int dificuldadeSelecionada = 0;
    
    printf("1. Jogar novamente\n");
    printf("2. mudar tema e dificuldade\n");
    printf("3. encerra o jogo\n");

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
            break;
    case 3: 
        // encerra o jogo, retornando o valor 0 no tema e dificuldade 
    break;    
    default:

        printf("algo de errado não esta certo, contate o suporte");
        break;
    }

    subMenu jogador;
    jogador.tema = temaSelecionado;
    jogador.dificuldade = dificuldadeSelecionada;

    return jogador; // envia os dados de volta
}