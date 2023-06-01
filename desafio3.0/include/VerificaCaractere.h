#include <stdio.h>

typedef struct
{
    int indice;
    int encontrado;
} retornoCaractere;


    retornoCaractere verificaCaractere(char palavra[], char caractere){

    int encontrou = 0;
    int indiceTenporario = -1;
    
    

    for (int i = 0; palavra[i] != '\0'; i++) {
             
                if (palavra[i] == caractere) {
                    encontrou = 1;
                    indiceTenporario = i;
                }
                    

                   
    }

        retornoCaractere dados;
        dados.indice = indiceTenporario;
        dados.encontrado = encontrou;

        return dados;

    }