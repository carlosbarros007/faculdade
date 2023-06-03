#include <string.h>
#include "bancoDados.h"
#include "VerificaCaractere.h"






 void nivelIniciante(int temaEscolhido){

    char (*dadosProgramacao)[50]; // variavel que armazena os dados carregados do banco
    char palavraSelecionada[50]; // armazena palavra selecionada

    int contadorCaractere = 0; // conta os caracteres da palavra selecionada
   
    char caractere;
    char palavraDigitada[50];

    int comparaPalavras;

    char exibePalavraSelecionada[50];

    int indice = 0; // armazena o indece em que o caractere foi emcontrado
    int caractereEncontrado = 0; // informa se o caractere foi encontrado
    
    switch (temaEscolhido) {
        case 1:
            dadosProgramacao = bancoDados("programacao");
            break;
        case 2:
            dadosProgramacao = bancoDados("tecnologia");
            break;
        case 3:
            dadosProgramacao = bancoDados("software");
            break;
        case 4:
            dadosProgramacao = bancoDados("linguagem");
            break;
        case 5:
            dadosProgramacao = bancoDados("frameworks");
            break;
        case 6:
            dadosProgramacao = bancoDados("ides");
            break;
        case 7:
            dadosProgramacao = bancoDados("areasTecnologia");
            break;
        default:
            printf("Opção de tema inválida. Por favor, escolha um número válido.\n");
            break;
    }


     printf("\n========== RODA RODA  ==========\n");
    printf("====================================\n");
    printf("||                                ||\n");
    printf("||           LET'S GO             ||\n");
    printf("||                                ||\n");
    printf("====================================\n");
    printf("====================================\n");

     for (size_t i = 0; i < 1; i++) {
            strcpy(palavraSelecionada, dadosProgramacao[i]);
        }

        printf("\n\n\n");

            printf("A palavra é: ");
            for (int i = 0; i < strlen(palavraSelecionada); i++) {
                printf(" * |");
                exibePalavraSelecionada[i] = '*'; // incrementa os astericos para serem exibidos na tela 
                contadorCaractere ++;
            }
            printf("\nEla tem %d letras", contadorCaractere);
    
        


        while (1) {

            printf("\n\nDigite uma letra: ");
            fflush(stdin);
            scanf(" %c", &caractere);

            retornoCaractere dados = verificaCaractere(palavraSelecionada,caractere);
            indice = dados.indice;
            caractereEncontrado = dados.encontrado;

            for ( int i = 0; i < 10; i++)
            {
                printf("%d", indice);
            }
            

            if (caractereEncontrado == 0)
            {
                printf("não foi dessa vez, tente denovo!!!");

            }else
            {
                //exibePalavraSelecionada[indice] = caractere;
                contadorCaractere = contadorCaractere - 1;

                //printf("%d", indice);
                printf("\n***** parabens!!! *****\n");


               // for (int i = 0; exibePalavraSelecionada[i] != '\0'; i++) {
                
               //     printf("%c |", exibePalavraSelecionada[i]);

               // } 


            }

            if (contadorCaractere == 3)
            {
                printf("\n\nvalendo tudo ou nada, qual e a palavra?\n\n");
                scanf("%s", palavraDigitada);

                comparaPalavras = strcmp(palavraSelecionada, palavraDigitada);

                if (comparaPalavras == 0)
                {
                   
                    printf("************************************\n");
                    printf("*           PARABENS!!!            *\n");
                    printf("*           %s                   *\n", palavraDigitada);
                    printf("************************************\n\n");

                    break;


                }else{

                    printf("perdedor");
                    break;

                }
                


            }
            
        }
            
            
          

        
    return;
 }