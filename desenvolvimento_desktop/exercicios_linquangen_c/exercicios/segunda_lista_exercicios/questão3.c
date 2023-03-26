#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Faça um programa que solicite ao usuário três números e os apresente na tela em ordem 
crescente.
*/

int main(){

    float numero1;
    float numero2;
    float numero3;

    
    printf("digite tres numeros aleatorios!!!\n");
    scanf("%f %f %f", &numero1, &numero2, &numero3);


    if (numero1 < numero2 && numero1 < numero3){

        if (numero2 < numero3){
            
            printf("%f %f %f", numero1, numero2, numero3);
        }else{
            printf("%f %f %f", numero1, numero3, numero2);
        }
        

    }else if (numero2 < numero1 && numero2 < numero3){

        if (numero1 < numero3){                
               
            printf("%f %f %f", numero2, numero1, numero3);

        }else{

            printf("%f %f %f", numero2, numero3, numero1);

        }
        
        
    }else if (numero3 < numero1 && numero3 < numero2){
        
        if (numero1 < numero2){

            printf("%f %f %f", numero3, numero1, numero2);

        }else{
            
            printf("%f %f %f", numero3, numero2, numero1);

        }
        
    }
 
 
}

/*codigo incompleto, buscar uma forma melhor de colocar os numeros em ordem cresente!!!*/