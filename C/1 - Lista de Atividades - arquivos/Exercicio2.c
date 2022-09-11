#include<stdio.h>
#include<stdlib.h>


float triangulo(float base, float altura){
    
    float resultado;

    resultado = (base * altura) / 2;
    
    return resultado;
}


int main(int argc, char *agrv[]){


    float BS, AL, Area;
    char c;

    system("Color 2");
    //Entrada de Dados
    
    printf("informe a base e a altura do triangulo: \n");
    printf("Base:");
    scanf("%f", &BS);
    
    printf("Altura:");
    scanf("%f", &AL);

    //Processamento
    Area = triangulo(BS, AL);
    system("cls");

    //Saida de Dados
    printf("A Area do seu triangulo é igual a: %.2f", Area);

    getchar();
    return 0;
}