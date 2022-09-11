#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 3

//Definicao de Variaveis e Vetores globais
int i = 0;
float salarios[tam];

void adicionar(float carregar_salario[tam]){
    
    printf("Digite os salarios que deseja adicionar: \n");

    for (i = 0; i < tam; i++)
    {
        scanf("%f", &carregar_salario[i]);
    }
    //limpeza de ambiente
    system("cls");
    
}

void imprimir(float imprimir_vet[tam]){
    int cont = 1;
    
    //loop
    for(i = 0; i < tam; i++){
        //Para caso houver valor igual a zero nao mostrar
        if(imprimir_vet[i]==0){
            printf("");
        } 
        else{
            //mostra todos os valores do vetor
            printf("Valor presente na posicao %d do vetor: %.2f \n", cont++, imprimir_vet[i]);
        }
        
    }
    //breve pausa para que o usuario possa visualizar as informacoes
    system("pause");
    //limpeza de ambiente
    system("cls");

}

float somar(float vet_soma[tam]){

    float total;

    for(i=0; i < tam; i++){
        total = total + vet_soma[i];
    }

    printf("A soma de todos os salarios presentes neste vetor e igual a: %.2f\n", total);

    system("pause");
    system("cls");
    return total;
}

float media(float media_sal[tam]){
    
    float total, media_final;

    for(i=0; i < tam; i++){
        total = total + media_sal[i];
    }

    media_final = total / tam;

    printf("A media salarial e igual a: %.2f\n", media_final);

    system("pause");
    system("cls");
    return total;
}

void imp_MQX(float salariosX[tam]){

    int x;

    printf("Abaixo de qual salario deseja imprimir: ");
    scanf("%d", &x);

    for(i=0; i < tam; i++){

        if(salariosX[i] < x ){
            printf("%.2f \n", salariosX[i]);
        }
    } 

    system("pause");
    system("cls");
}


int main(int argc, char *agrv[]){
    setlocale(LC_ALL,"");

    int escolha;

     while(escolha != 99){

        printf("*********************************************\n");
        printf("************** MENU - SALARIOS **************\n");
        printf("*********************************************\n");

        printf("01 - Adicionar\n");
         
        printf("03 - Imprimir todos\n");

        printf("07 - Somar salarios\n");

        printf("14 - Media salarios\n");

        printf("18 - Imprimir salarios menores que X\n");

        printf("99 - Sair.\n");

        printf("Escolha qual a opcao desejada no menu de acordo com seu numero: \n");
        scanf("%d", &escolha);
        system("cls");

        switch (escolha){
            case 1:
            adicionar(salarios);
                break;
            case 3:
            imprimir(salarios);
                break;
            case 7:
            somar(salarios);
                break;
            case 14:
            media(salarios);
                break;
            case 18:
            imp_MQX(salarios);
                break;
        }
    }

    return 0;
}    



