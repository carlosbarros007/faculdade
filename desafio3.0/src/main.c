#include <stdio.h>
#include <string.h>
//#include "bancoDados.h"
#include "../include/menuInicial.h"
#include "../include/menuSecundario.h"



int iniciaJogo( int nivel, int tema){

     // inicia a logica do jogo no nivel selecionado
    if(nivel == 1){

        nivelIniciante(tema);

    }else{

        printf("\nfunção em desenvolvimento, por favor escolher a primeira opção.\n");
    }

    return 0;

}


int main(void) {
  

    int dificuldadeSelecionada = 0;
    int temaSelecionnado = 0;

    // apresentação
    printf("************************************\n");
    printf("*           Seja bem-vindo         *\n");
    printf("*            ao RODA RODA          *\n");
    printf("************************************\n\n");



    // chama o menu e armazena retorno
    
    inicialMenu retornoMenuPrincipal = menu();
    dificuldadeSelecionada = retornoMenuPrincipal.dificuldade;
    temaSelecionnado = retornoMenuPrincipal.tema;

   
    // não sei o que to fazendo...

    while (1)
    {
        iniciaJogo(dificuldadeSelecionada, temaSelecionnado);

         subMenu retornoSubMenu = menu2();
         dificuldadeSelecionada = retornoSubMenu.dificuldade;
         temaSelecionnado = retornoSubMenu.tema;

        if (dificuldadeSelecionada == 0 && temaSelecionnado == 0)
        {
            printf("Ate a proxima!!!");
            break;
        }
        
    }

    return 0;
}
