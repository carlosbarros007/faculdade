#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/*Fazer um programa que possa converter uma determinada quantia dada em reais para 
uma das seguintes moedas:
• F – franco suíço
• L – libra esterlina
• D – dólar
• M – marco alemão
(consultar na internet os valores atuais de cada moeda)*/

// converte a moeda
float converteMoeda(char moeda, float valorEmReais){

    // valores moedas

    const float francoSuico = 5.55;
    const float libraEsterlina = 6.25;
    const float dolar = 5.20;
    const float marcoAlemao = 1;

    float valorConvertido;



    if (moeda == 'f'){

        valorConvertido = valorEmReais * francoSuico;
        return(printf("o valor convertido em franco suico e: %f\n", valorConvertido));

    }else if (moeda == 'l'){

        valorConvertido = valorEmReais * libraEsterlina;
        return(printf("o valor convertido em franco libra esterlina e: %f\n", valorConvertido));

    }else if (moeda == 'd'){
        
        valorConvertido = valorEmReais * dolar;
        return(printf("o valor convertido em dolar e: %f\n", valorConvertido));

    }else if (moeda == 'm'){

        valorConvertido = valorEmReais * marcoAlemao;
        return(printf("o valor convertido em marco alemao e: %f\n", valorConvertido));

    }else{

        return(printf("moeda nao reconhecida, verifique a moeda e tente novamente."));

    }
    
    
  
    

}

   


int main(void){

    //variaveis de entrada e saida

    char moeda[1];
    float valorEmReais;
    
    float resultadoFinal;

    printf("converta sua moeda!!!\n");
    system("pause");

    printf("para qual moeda voce quer converter responda\n 'f' para franco suico\n 'l' para libra esterlina\n 'd' para dolar \n 'm' para marco alemao\n ");
    gets(moeda);

    printf("digite o valor a ser convertido!\n"); 
    scanf("%f", &valorEmReais);

    resultadoFinal = converteMoeda(moeda[1], valorEmReais);

    printf("%f", resultadoFinal);

    return 0;
}

// desconsidere o ultimo valor que aparece apos imprimir o resultado é um bug que eu não sei como resolver.




