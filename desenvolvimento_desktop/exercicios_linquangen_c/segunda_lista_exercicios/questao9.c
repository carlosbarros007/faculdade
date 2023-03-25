#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*Fazer um programa para ler a duas notas, calcular e mostrar a média com a mensagem:
Inferior a 5,0 – “Reprovado”
De 5,1 a 6,9 – “Exame”
De 7,0 a 10 – “Aprovado”*/

int main(){

    float nota1;
    float nota2;
    float media;

    printf("digite as suas notas!!\n");
    scanf("%f %f", &nota1, &nota2);

    media = (nota1 + nota2) / 2;

    if (media <= 5){

        printf("sua media foi %.2f, e voce foi reprovado", media);

    }else if(media > 5 || media <= 6.9){
        
        printf("sua media foi %.2f, voce tera que fazer um novo exame", media);
    }else{

        printf("sua media foi %.2f, voce esta aprovado!!!", media);

    }
    
}