#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Tde Aluno com a informacoes de cada aluno*/
struct Aluno{

    //informacoes detalhadas do aluno
    int RA, IDADE;
    float MENSALIDADE;
    char nome[15];

    //ponteiro que ira apontar para o proximo elemento
    struct Aluno *prox;

};

//Variaveis globais
typedef struct Aluno tipoAluno;
int QElement;


/*Iniciando a fila atribuindo NULL(valor vazio) para todas as posicoes*/
void start(tipoAluno *Fila){

    //Fila apontada por *Fila
    Fila->prox = NULL;
    QElement = 0;

}

/*Verificando se a fila esta vazia
Retorno de 0 se estiver sem valores e 1 para quando possuir algum valor*/
int vazia(tipoAluno *Fila){

    if(Fila->prox == NULL)
        return 1;
    else    
        return 0;
}


/*Libera a memoria de todos os elementos da fila == Apaga todos os elementos*/
void liberar(tipoAluno *Fila){
    
    if(vazia(Fila) == 0){
        
        tipoAluno *prox, *atual;

        atual = Fila->prox;

        while(atual != NULL){
            
            prox = atual->prox;
            free(atual);
            atual = prox;

        }

    }
}

/*Criando um espaco de memoria com um novo elemento e 
carregando valores para retornar com seu ponteiro*/ 
tipoAluno *criar(){

    tipoAluno *new = (tipoAluno*)malloc(sizeof(tipoAluno));
    char nome[15];

    if(!new){
        printf("Memoria insuficiente! \n\n");
    }else{

        printf("Digite o nome do aluno: \n");
        scanf("%s", nome);
        strcpy(new->nome, nome);
        printf("Digite a idade do aluno: \n");
        scanf("%d", &new->IDADE);
        printf("Digite o RA do aluno: \n");
        scanf("%d", &new->RA);
        printf("Digite a mensalidade do aluno: \n");
        scanf("%f", &new->MENSALIDADE);

        return new;
    }
}


/*Adiciona valor a fila*/
void adc(tipoAluno *Fila){

    /*Declarando ponteiro do tipoAluno que ira receber */
    tipoAluno *newAluno = criar();

    /*Atribuindo NULL para o prox espaco da fila*/
    newAluno->prox = NULL;

    if(vazia(Fila)){
        Fila->prox = newAluno;
    }else{

        tipoAluno *temp = Fila->prox;

        /*Localizando ultima pos da fila*/
        while(temp->prox != NULL){
            temp = temp->prox;
        }

        temp->prox = newAluno;

    }

    QElement = QElement + 1;
}


/*Remove elementos da fila caso nao esteja vazia e retorna um ponteiro*/
tipoAluno *desenfileirar(tipoAluno *Fila){
    if(Fila->prox == NULL){
        printf("A Fila esta Vazia! \n\n");
        
    }else{
        tipoAluno *temp = Fila->prox;
        Fila->prox = temp->prox;

        QElement = QElement - 1;

        return temp;
    }
}


/*Func para mostrar todos os Alunos na fila de atendimento*/
void MostraTudo(tipoAluno *Fila){

    /*Verificacao de fila vazia atraves da func "vazia()"*/
    if(vazia(Fila) == 1){
        printf("Fila Vazia!\n\n");
    }else{

        /*Criacao de ponteiro temporario do tipo aluno para puxar
        informacoes do proximo no/item da fila*/
        tipoAluno *temp;
        /*Recebendo valores da fila*/
        temp = Fila->prox;

        while(temp != NULL){
            printf("Nome do Aluno: %s\n", temp->nome);
            printf("Idade do Aluno: %d\n", temp->IDADE);
            printf("RA do Aluno: %d\n", temp->RA);
            printf("Mensalidade que ete aluno paga: %.2f\n\n", temp->MENSALIDADE);

            //Passando para o proximo elemento
            temp = temp->prox;
        }
    }
}


/*Func para buscar aluno pelo seu RA*/
void BuscarRA(tipoAluno *Fila){
    
    if(vazia(Fila) == 1){
        printf("A Fila esta vazia! \n\n");
    
    }else{

        tipoAluno *temp;
        int RA;
        temp = Fila->prox;
       

        printf("Digite o RA do aluno que deseja ter as informacoes: ");
        scanf("%d", &RA);

        while(temp != NULL){

            if(RA == temp->RA){

                printf("\n");
                printf("Nome do aluno nesta posicao : %s \n", temp->nome);
                printf("Idade do aluno nesta posicao : %d \n", temp->IDADE);
                printf("RA do aluno nesta posicao : %d \n", temp->RA);
                printf("Mensalidade do aluno nesta posicao : %.2f \n", temp->MENSALIDADE);

                return;
            }
        }


    }
}



int main(int argc, char *argv[]){

    int opc;
    
    //Ponteiro para fila do tipo fila
    tipoAluno *FilaAtend = (tipoAluno*) malloc(sizeof(tipoAluno));

    //iniciando fila
    start(FilaAtend);

    do{
        //Iniciando menu de atendimento
        printf("\nBem-Vindo ao menu de atendimento ao aluno: \n\n");
        printf("0 - Liberar fila (Libera todos os valores)\n");
        printf("1 - Adicionar aluno a fila\n");
        printf("2 - Atender aluno (Remover da fila)\n");
        printf("3 - Mostrar todos os alunos da fila (Imprimir todos)\n");
        printf("4 - Quantidade de alunos na fila\n");
        printf("5 - Buscar por RA\n");
        printf("99 - Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opc);
        printf("\n\n");

        //Cadeia de escolhas com switch
        switch(opc){
            case 0:
                start(FilaAtend);
                liberar(FilaAtend);
                break;
            case 1:
                adc(FilaAtend);
                break;
            case 2:
                desenfileirar(FilaAtend);
                break;
            case 3:
                MostraTudo(FilaAtend);
                break;
            case 4:
                /*Criada uma variavel global para contar os elementos,
                nao sera necessario criar uma nova func*/
                printf("Quantidade de alunos na fila: %d\n\n", QElement);
                break;
            case 5:
                BuscarRA(FilaAtend);
                break;
        }

        
        
        
        

        
    }while(opc!=99);


    free(FilaAtend);

    return 0;
}