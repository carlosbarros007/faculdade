/* 

    JOKENPO versão: 05032023.1
    Desenvolvido: Carlos Barros
    GitHub: https://github.com/carlosbarros007

*/

# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <conio.h>

// sorteia um numero aleatorio para a maquina.
int sorteio(){

    int numeroAleatorio;

    srand(time(NULL));
    numeroAleatorio = rand() %3 +1;

    return(numeroAleatorio);

}

int main(void){

// variaveis de entrada e saida

    int jogador;
    int maquina = sorteio();

// apresentação
    printf("BEM_____VINDO____AO!!!\n");
    printf("____SUPER JOKENPO____\n \n");

// instruções
    
    printf("1. para pedra\n");
    printf("2. para papel\n");
    printf("3. para tesoura\n \n");

// coleta dados do jogador

    printf("selecione:");
    scanf("%i", &jogador);

// informa o que cada jogardor escolheu e determina o vencedor

    if (jogador < 1 || jogador > 3){
      
       printf("\nValor escolhido esta incorreto!!!");
        
    }else{

        // informa o que o jogador escolheu
        if (jogador == 1){
            
            printf("\nJogador escolheu 1. pedra\n \n");

        }else if (jogador == 2){
            
            printf("\nJogador escolheu 2. papel\n \n");

        }else{

            printf("\nJogador escolheu 3. tessoura\n \n");
        }
        
        // informa o que a maquina escolheu

        if (maquina == 1){
            
            printf("\nMaquina escolheu 1. pedra\n \n");

        }else if (maquina == 2){
            
            printf("\nMaquina escolheu 2. papel\n \n");

        }else{

            printf("\nMaquina escolheu 3. tessoura\n \n");
        }
        
        // define o vencendor

        if (jogador == maquina){
            
            printf("Empate");
        }else if ((maquina == 2 && jogador == 1) || (maquina == 1 && jogador == 3) || (maquina == 3 && jogador == 2)){
            
            printf("EU GANHEI!!!\n");
            printf("vamos jogar mais uma?");

        }else{
            
            printf("Como voce ganhou?!");

        }
    }
    

    return 0;
}

/*Código inicial, tem bastante espaço para melhorias e adição de novas funcionalidades, criei o jogo com baseno 
no meu conhecimento e com algumas pesquisas na internete que me ajudaram a entender como funciona a geração de 
numeros aleatoris dentro da linguagem C.*/