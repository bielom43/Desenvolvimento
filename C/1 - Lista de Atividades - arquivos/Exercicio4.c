#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){

    float p1, p2 , tr, mf, nc;

    printf("Insira os dados solicitados abaixo para calculo da media final do seu aluno: \n");
    printf("Insira a baixo valor da prova 1: \n");
    scanf("%f", &p1);
    printf("Insira a baixo valor da prova 2: \n");
    scanf("%f", &p2);
    printf("Insira a baixo valor do TR: \n");
    scanf("%f", &tr);
    printf("Insira a baixo o valor da nota de corte: \n");
    scanf("%f", &nc);

    mf = (p1 * 0.40) + (p2 * 0.40) + (tr * 0.20);
    system("cls");
    
    printf("A media final do seu aluno foi de : %.2f\n", mf);

    if(mf >= nc){

        printf("Aluno Aprovado!!");
    }else {

        printf("Aluno Reprovado!!");
    }






    return 0;
}

