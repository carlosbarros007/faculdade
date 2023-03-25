#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    int main(){
       
        int anoEntrada;
        int numeroAureo;
        int seculo;
        int calculoCorrecaoX;
        int calculoCorrecaoZ;
        int calculoEpacta;
        int calculoLuaCheia;
        int diaDomingo;

            printf("Calcule a data da pascoa em qualquer ano.\n");
              

            printf("digite um ano:");
            scanf("%i", &anoEntrada);
            
            // calculo numero aureo
            numeroAureo = (anoEntrada % 19) + 1;
            
            
            // calculo seculo
            seculo = (anoEntrada / 100)+1;

            // Calculo correção de erros 
            calculoCorrecaoX = ((seculo * 3) /4) - 12 ;
            calculoCorrecaoZ = ((seculo * 8 + 5) /25) - 5;

            // calculo Epacta

            calculoEpacta = (11 * numeroAureo + 20 + calculoCorrecaoZ - calculoCorrecaoX) % 30;

            if (calculoEpacta == 25 && numeroAureo > 11 || calculoEpacta == 24){
            
                calculoEpacta = calculoEpacta + 1;

            }


            // calculo lua cheia

            calculoLuaCheia = 44 - calculoEpacta;
            
            if (calculoLuaCheia < 21){
                
                calculoLuaCheia = calculoLuaCheia + 30;
            }
            
            // calculo dia domingo

            diaDomingo = ((anoEntrada * 5) /4) - (calculoCorrecaoX + 10);
            calculoLuaCheia = (calculoLuaCheia + 7) - ((diaDomingo + calculoLuaCheia) % 7);


            // imprime o resultado

            if (calculoLuaCheia > 31){

                calculoLuaCheia = calculoLuaCheia - 31;
                
                printf("A pascoa sera %i de abril", calculoLuaCheia);

            }else{

                printf("A pascoa sera %i de marco", calculoLuaCheia);

            }
        
    
        return 0;
    }
