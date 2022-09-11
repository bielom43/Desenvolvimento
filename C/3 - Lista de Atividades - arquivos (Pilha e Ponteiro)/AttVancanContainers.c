#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define qtd 10
struct containner
{
    int code;
    float heigth, width, profundity;
    char brand[50], company[50];
};

struct containner vContainner[qtd];
int topoPilha = -1;

void push(struct containner *vetor, int tam) {
    int i = 0;
    
    for (i = 0; i < tam; i++) {
        vetor[i].code = -1;
        vetor[i].heigth = -1;
        vetor[i].width = -1;
        vetor[i].profundity = -1;
        strcpy(vetor[i].brand, "NULL");
        strcpy(vetor[i].company, "NULL");
    }   
}

int obterPosicaoVazia(struct containner *vetor, int tam) {
    int i = 0;
    int posicao = -1;
    
    for (i = 0; i < tam; i++) {
        if ((vetor[i].code == -1) & (posicao == -1)) {
            posicao = i;
        }
    }
    
    return posicao; 
}

int caracteristicasContainner(struct containner *vetor, int tam) {
    int posicao = -1;
    int vCode; 
    float vHeigth,  vWidth, vProfundity;
    char vBrand[50], vCompany[50];

    printf("Insira o codigo do containner: \n");
    scanf("%i", &vCode);
    printf("Insira a altura do containner: \n");
    scanf("%f", &vHeigth);
    printf("Insira a largura do containner: \n");
    scanf("%f", &vWidth);
    printf("Insira a profundidade do containner: \n");
    scanf("%f", &vProfundity);
    printf("Insira a marca do containner: \n");
    scanf("%s", &vBrand);
    printf("Insira a empresa do containner: \n");
    scanf("%s", &vCompany);
    
    posicao = obterPosicaoVazia(vetor, tam);
    
    if (posicao >= 0) {
        vetor[posicao].code = vCode;
        vetor[posicao].heigth = vHeigth;
        vetor[posicao].width = vWidth;
        vetor[posicao].profundity = vProfundity;

        strcpy(vetor[posicao].brand, vBrand);
        strcpy(vetor[posicao].company, vCompany);
    }

    topoPilha += 1;

    return posicao; 
}

void pop(struct containner *vetor)
{   int i = 0, pop;
    int posicao = -1;

    printf("Insira o numero do containner que deseja remover: \n");
    scanf("%i", &pop);

    for(i = 0; i < qtd; i++)
    {
        if(pop != vetor[i].code)
        {

        }
        else
        {
           vetor[i].code = 0;
            vetor[i].heigth = 0;
            vetor[i].width = 0;
            vetor[i].profundity = 0;
            strcpy(vetor[i].brand, "NULL");
            strcpy(vetor[i].company, "NULL");
        }
    }

    topoPilha -= 1;
}


int isEmpty(struct containner *vetor, int tam) {
    int i = 0;
    int posicao = -1;
    
    for (i = 0; i < tam; i++) {
        if ((vetor[i].code == 0) & (posicao == -1) || (vetor[i].code == -1) & (posicao == -1) ) {
            printf("a posicao: %i esta vazia: True \n", i);
        
        }
        else
        {
            printf("a posicao %i esta cheia :False \n", i);
        }
    }
    
    return 0;
}

int IsFull(struct containner *vetor, int tam) {
    int i = 0;
    int posicao = -1;
    
    for (i = 0; i < tam; i++) {
        if (topoPilha == qtd - 1) {
            printf("True \n");
        }
        else
        {
            printf("False \n");
        }
    
        return posicao; 
    }
}

void printAll(struct containner *vetor, int tam) {
    int i = 0;
    
    for (i = 0; i < tam; i++) {
        printf("code: %i - heigth: %f - width: %f - produndity: %f - brand: %s - company: %s; \n", vetor[i].code, vetor[i].heigth, vetor[i].width, vetor[i].brand, vetor[i].company);
    }   
}

void printTop(struct containner *vetor, int tam)
{
    int i = 0;
    int posicao = -1;
    for (i = 0; i < tam; i++) {
        if(topoPilha == i )
        {
            printf("code: %i - heigth: %f - width: %f - produndity: %f - brand: %s - company: %s; \n", vetor[i].code, vetor[i].heigth, vetor[i].width, vetor[i].brand, vetor[i].company);
        }
        else 
        {

        }
    }   
}

void PrintAllOfEnterprise(struct containner *vetor, int tam)
{
    int i = 0;
    char find[50];

    printf("insira a empresa que deseja encontrar: \n");
    scanf("%s", &find[50]);

    

    for (i = 0; i < tam; i++) {
        if(vetor[i].company ==  *find)
        {
            printf("code: %i - heigth: %f - width: %f - produndity: %f - brand: %s - company: %s; \n", vetor[i].code, vetor[i].heigth, vetor[i].width, vetor[i].brand, vetor[i].company);
        }
        else 
        {
            printf("Nada encontrado \n");
        }
    }

    /* nao terminado, nao consegui realizar essta funcao*/
}
 

void findPrint(struct containner *vetor, int tam)
{
    int i = 0;
    int find;

    printf("insira o codigo que deseja encontrar: \n");
    scanf("%i", &find);

    for (i = 0; i < tam; i++) {
        if(vetor[i].code == find)
        {
            printf("code: %i - heigth: %f - width: %f - produndity: %f - brand: %s - company: %s; \n", vetor[i].code, vetor[i].heigth, vetor[i].width, vetor[i].brand, vetor[i].company);
        }
        else 
        {

        }
    }   
}

void getNumberElements(struct containner *vetor, int tam)
{
    int i = 0, total = 0;

     for (i = 0; i < tam; i++) {
         if(vetor[i].code != 0 && vetor[i].code != -1)
         {
             total += 1;
         }
         else
         {

         }
    }

    printf("o total de elementos: %i \n", total);   
}

int main(int argc, char *argv[])
{   
    int opcao;

    printf("insira a opção desejada:\n (1) StackContainners (adicionar containner) \n (2) Push(adicionar caracteristicas do containner)\n (3)Pop(remover containner)\n");
    printf(" (4) IsEmpty (se a pilha esta vazia) \n (5) IsFull(se a pilha esta cheia)\n (6)PrintAll(mostar tudo)\n (7) PrintAllOfEnterprise (mostrar todos os elementos de uma empresa)\n");
    printf(" (8) PrintTop (mostra o topo da pilha) \n (9) FindPrint(procura elementos por codigo)  \n (10)GetNumberElements(mostar qunatos elementos tem na pilha)\n");
    
    while (opcao != 99)
    {

        printf("Insira a opcao desejada: \n");
        scanf("%i", &opcao);

        switch (opcao)
        {
        case 1:
            push(vContainner, qtd);
            break;
        case 2:
            caracteristicasContainner(vContainner, qtd);
            break;
        case 3:
            pop(vContainner);
            break;
        case 4:
            isEmpty(vContainner, qtd);
            break;
        case 5:
            IsFull(vContainner, qtd);
            break;
        case 6:
            printAll(vContainner, qtd);
            break;
        case 7:
            PrintAllOfEnterprise(vContainner, qtd);
            break;
        case 8:
            printTop(vContainner, qtd);
            break;
        case 9:
            findPrint(vContainner, qtd);
            break;
        case 10:
            getNumberElements(vContainner, qtd);
            break;
        
        case 99:
            break;
        }
    }
   

    return 0;
}

