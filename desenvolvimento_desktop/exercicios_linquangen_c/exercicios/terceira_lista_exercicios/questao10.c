#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 int main(){

     int altura;
     int largura;

     int contador1;
     int contador2;

     char pulaLinha = '\n';

     printf("%c", pulaLinha);



     printf("Desenhe um retangulo com asteriscos!");
     printf("digite dois valovres: ");
     scanf("%i%i", &altura, &largura);


     while(contador2 < altura){



         while(contador1 < largura){

             printf("*");
             contador1++;
        }

        printf("\n");
        contador1 = 0;
        contador2++;
    }

    return 0;
 }
