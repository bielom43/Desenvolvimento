#include <stdio.h>
#include<stdlib.h>

int main(int agrc, char *argv[]){

    //Variaveis
    float NumP, NumS;

    //Entrada de Dados
    printf("Digite o primeiro valor que deseja comparar: ");
    scanf("%f", &NumP);

    printf("Digite o segundo valor que deseja comparar: ");
    scanf("%f", &NumS);

    //Processamento Logico e Saida
    if(NumP == NumS){
       
        printf("Os valores sao iguais!");
    
    }else{
        
        if(NumP > NumS){

            printf("O Primeiro valor e maior que o segundo ");
        
        }else{

            printf("O segundo valor e maior que o primeiro");

        }
    }
  

    getchar();
    return 0;
}