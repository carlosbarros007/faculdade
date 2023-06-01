#include <stdio.h>
#include <string.h>
#include "iniciante.h"

// cria uma estrutura para retorna os dados
typedef struct {
    int tema;
    int dificuldade;
} escolhaJogador;

// recolhe os dados
escolhaJogador menu() {
    int escolhaDificuldade;
    int escolhaTema;

    printf("************************************\n");
    printf("*           Seja bem-vindo          *\n");
    printf("*            ao RODA RODA           *\n");
    printf("************************************\n\n");

    printf("Escolha a dificuldade:\n");
    printf("1. Iniciante\n");
    printf("2. Intermediário\n");

    printf("Digite o número correspondente à opção desejada: ");
    scanf("%d", &escolhaDificuldade);

    printf("\nEscolha o tema:\n");
    printf("1. Programação\n");
    printf("2. Tecnologia\n");
    printf("3. Software\n");
    printf("4. Linguagem\n");
    printf("5. Frameworks\n");
    printf("6. IDEs\n");
    printf("7. Áreas de Tecnologia\n\n");

    printf("Digite o número correspondente à opção desejada: ");
    scanf("%d", &escolhaTema);

    escolhaJogador jogador;
    jogador.tema = escolhaTema;
    jogador.dificuldade = escolhaDificuldade;

    nivelIniciante(jogador.tema);

    return jogador; // envia os dados de volta
}
