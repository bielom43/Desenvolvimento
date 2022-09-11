#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 100
#define QTD 9

struct Livro{

    int codigo, class, fTamanho;
    char nome[15];
    float preco;

    struct Livro* anterior;
    struct Livro* proximo;
};



typedef struct Livro tLivro;



/*Criacao de espaco na memoria atribuicao e 
retorno do valor informado*/
tLivro *Criar(tLivro *lista){
    
    tLivro * temp;
    int eCodigo, eClass, i = 0;
    char eNome[15];
    float ePreco;



    temp = (tLivro *)malloc(sizeof temp);

    printf("Digite o codigo do livro que deseja adicionar a lista: ");
    scanf("%d", &eCodigo);
    printf("Digite o nome do livro que deseja adicionar a lista: ");
    scanf("%s", eNome);
    printf("Digite a classificacao do livro que deseja adicionar: ");
    scanf("%d", eClass);
    printf("Digite o preco do livro que deseja adicionar: ");
    scanf("%f", ePreco);
    printf("\n");

    
    temp = lista;
    temp->codigo = eCodigo;
    strcpy(temp->nome, eNome);
    temp->class = eClass;
    temp->proximo = NULL;
    temp->anterior = NULL;
    temp->fTamanho = 0;
    
    
    return temp;
}



tLivro* inserirFinal(tLivro *lista, int valor)
{	tLivro *temp;
	
	//Percorrendo at� o ultimo elemento da lista.
	temp = lista;
	while ((temp->proximo == NULL) == 0) {
		temp = temp->proximo;
	}
	
	//Criando e inserindo o novo elemento no final da lista.
	temp->proximo = (Criar(lista));
	
	//Vinculando o ponteiro ANTE ao final da lista.
	(temp->proximo)->anterior = temp;
    temp->fTamanho++;

}


tLivro* inserirInicio(tLivro *lista, int valor)
{	tLivro *temp;
	
	//Percorrendo at� o primeiro elemento da lista.
	temp = lista;
	while ((temp->anterior == NULL && temp->proximo != NULL) == 0) {
		temp = temp->anterior;
	}
	
	//Criando e inserindo o novo elemento no final da lista.
	temp->anterior = (Criar(lista));
	
	//Vinculando o ponteiro proximo ao Inicio da lista.
	(temp->anterior)->proximo = temp;
    temp->fTamanho++;

}


tLivro *inserirApos(tLivro *lista, int valor){
    tLivro *temp = lista;

    while((temp->proximo != NULL) != 0){
        if(temp->codigo == valor){
            temp->proximo = Criar(lista);
        }
        temp = temp->proximo;
    }

    (temp->proximo)->anterior = temp;
    temp->fTamanho++;

}


void inserirAntes(tLivro *lista, int valor){
    tLivro *temp = lista;

    while((temp->proximo != NULL) != 0){
        if(temp->codigo == valor){
            temp->anterior = Criar(lista);
        }
        temp = temp->proximo;
    }

    (temp->anterior)->proximo = temp;
}


tLivro *removerInicio(tLivro *lista)
{   tLivro *temp;
	
	temp = lista;
    if ((temp->anterior == NULL) && (temp->proximo != NULL)) {
				temp = temp->proximo;
				temp->anterior->proximo = NULL;
				temp->anterior = NULL;
				temp->fTamanho--;
				lista = temp;
				free(temp);
				return lista;										
	} 
}


tLivro *removerFinal(tLivro *lista)
{
    tLivro *temp;
	
	temp = lista;
    
    if ((temp->anterior != NULL) && (temp->proximo == NULL)) {
		temp = temp->anterior;
		temp->proximo->anterior = NULL;
		temp->proximo = NULL;
        temp->fTamanho--;
						
		/* retorna a mesma lista */
        lista = temp;
        free(temp);

		return lista;
	}
}


tLivro *removerCod(tLivro *lista) {
    
    tLivro *anterior = NULL; // ponteiro para o elemento anterior
    tLivro *p = lista; // Ponteiro para percorrer a lista
    int valor;

    printf("Insira o Codigo que deseja remover: \n");
    scanf("%d", &valor);
    while(p != NULL && p->codigo != valor)
    {
        anterior = p;
        p = p->proximo;
    }

    if (p == NULL)
    {
        return lista;
    }

    if (anterior == NULL)
    {
        lista = p->proximo;
    }
    else{
        anterior->proximo = p->proximo; // caso 2
    }


    free(p);
    return lista;
}


void pesquisaCod(tLivro *lista){
    tLivro  *temp;
    int lcodigo;

    temp = lista;

    printf("Digite o codigo do livro que deseja procurar: ");
    scanf("%d", &lcodigo);

    while((temp->proximo != NULL) != 0){
        if(temp->codigo == lcodigo){
            printf("Livro: %s \n", temp->nome);
            printf("Classificacao: %d \n", temp->class);
            printf("Codigo: %d \n", temp->codigo);
            printf("Preco: %2.f \n", temp->preco);
        }
        temp = temp->proximo;
    }
}

void imprimirIncioFinal (tLivro *lista) {
	tLivro *temp;
	
	temp = lista;
	
	while ((temp == NULL) == 0) {
		printf("%d \n", temp->codigo);
		printf("%c \n", temp->nome);
		printf("%d \n", temp->class);
		printf("%f \n", temp->preco);
        
		temp = temp->proximo;
	} 
}


void imprimirFinalInicio (tLivro *lista) {
	tLivro *temp;
	
	temp = lista;
	
    while((temp == NULL) == 0){

        temp = temp->proximo;

    }

    while((temp->anterior == NULL) == 0){
        
        printf("Codigo: %d", temp->codigo);
        printf("Nome: %s", temp->nome);
        printf("Classificacao: %d", temp->class);
        printf("Preco: %.2f", temp->preco);

        temp = temp->anterior;

    }

}


int contarLivros(tLivro *lista)
{   
    int qLivros = 0;
    tLivro *temp;

    temp = lista;

    while((temp->proximo != NULL) != 0)
    {
        qLivros = qLivros + 1;

        temp = temp->proximo;
    }

    return qLivros;
}


void maiorPreco(tLivro *lista)
{   
    float  maior = 0;

    tLivro *temp;

    temp = lista;

    while (temp->preco > maior && temp == NULL)
    {
        maior = temp->preco;
    }
    
    printf("%f", maior);
}


void media(tLivro *lista)
{   
    float  media = 0;

    tLivro *temp;

    temp = lista;

    while ((temp->proximo != NULL) != 0)
    {
        media = (media + temp->preco)/contarLivros(lista);
    }
    
    printf("%f", media);
}



void ContarClassDesejada(tLivro *lista){
    tLivro *temp;
    int qClass = 0;
    temp = lista;
    int pClass;

    printf("Insira a classificacao desejada: \n");
    scanf("%i", pClass);

    while((temp->proximo == NULL) == 0){
 
        if(temp->class == pClass)
        {
            qClass = qClass + 1;
        }    

    }

}


void removerClass(tLivro *lista)
{
    tLivro *temp;
    int pClass;

    temp = lista;
    

    printf("Insira a classificacao desejada: \n");
    scanf("%d", pClass);

    while ((temp == NULL) == 0)
    {
        if(temp->class == pClass)
        {
                free(temp);
                temp->fTamanho--;
        }
    }
    
    lista = temp;
    return lista;

}


void contarClassGeral(tLivro *lista)
{
    tLivro *temp;
    int qClassAdulto = 0, qClassinfantil = 0, qClassRomance = 0, qClassSuspense = 0, qClassTerror = 0;
    temp = lista;
    int pClass;

    while((temp->proximo == NULL) == 0){
        if(temp->class == 1)
        {
            qClassAdulto +=1;
        }
        else if(temp -> class == 2)
        {
            qClassinfantil += 1;
        
        }
        else if(temp -> class == 3)
        {
            qClassRomance += 1;
        
        }
        else if(temp -> class == 4)
        {
            qClassSuspense += 1;
        
        }
        else if(temp -> class == 5)
        {
            qClassTerror += 1;
        
        }

    }

    printf("**** quantidade por classificação *****");
    printf("Adulto: %d", qClassAdulto);
    printf("Infantil: %d", qClassinfantil);
    printf("Romance: %d", qClassRomance);
    printf("Suspense: %d", qClassSuspense);
    printf("Terror: %d", qClassTerror);
}

void somarClassDesejada(tLivro *lista){
    tLivro *temp;
    int totalClass = 0;
    temp = lista;
    int pClass;

    printf("Insira a classificacao desejada: \n");
    scanf("%i", pClass);

    while((temp->proximo == NULL) == 0){
 
        if(temp->class == pClass)
        {
            totalClass = totalClass + temp->preco;
        }    

    }

}

void maiorClassificacao(tLivro *lista)
{
    
    tLivro *temp;
    int qClassAdulto = 0, qClassinfantil = 0, qClassRomance = 0, qClassSuspense = 0, qClassTerror = 0;
    temp = lista;
    int pClass;

    while((temp->proximo == NULL) == 0){
        if(temp->class == 1)
        {
            qClassAdulto +=1;
        }
        else if(temp -> class == 2)
        {
            qClassinfantil += 1;
        
        }
        else if(temp -> class == 3)
        {
            qClassRomance += 1;
        
        }
        else if(temp -> class == 4)
        {
            qClassSuspense += 1;
        
        }
        else if(temp -> class == 5)
        {
            qClassTerror += 1;
        
        }

    }

    if (qClassAdulto > qClassinfantil && qClassAdulto > qClassRomance && qClassAdulto > qClassSuspense && qClassAdulto > qClassTerror)
    {
        printf("A classificação: adulto é a com maior quantidade de livros");
    }
    else if(qClassinfantil > qClassAdulto && qClassinfantil > qClassRomance && qClassinfantil > qClassSuspense && qClassinfantil > qClassTerror)
    {
        printf("A classificação: Infantil é a com maior quantidade de livros");
    }
    else if(qClassRomance > qClassAdulto && qClassRomance > qClassinfantil && qClassRomance > qClassSuspense && qClassRomance > qClassTerror)
    {
        printf("A classificação: Romance é a com maior quantidade de livros");
    }
    else if(qClassSuspense > qClassAdulto && qClassSuspense > qClassinfantil && qClassSuspense > qClassRomance && qClassSuspense > qClassTerror)
    {
        printf("A classificação: Suspense é a com maior quantidade de livros");
    }
    else if(qClassTerror > qClassAdulto && qClassTerror > qClassinfantil && qClassTerror > qClassRomance && qClassTerror > qClassSuspense)
    {
        printf("A classificação: Terror é a com maior quantidade de livros");
    }

}


int buscarNo(tLivro *lista, tLivro *proximo){
    if(proximo != NULL){

    }

    printf("Nao existe na lista!!");
    return 0;
}

/*b.19 Imprimir ordenados por Código; //Deverá exibir todos 
 os livros ordenados a partir de seus códigos. 
Para codificar a solicitação existem várias técnicas,
 desde ordenar a lista propriamente dito, como criar uma lista auxiliar e adicionar 
os elementos da lista principal nesta lista ordenada
 e/ou até mesmo criar um vetor e adicionar os valores e ordenar 
 no vetor e exibi-lo.*/

/*Imprime todos os livros ordenados por codigo*/
void imprimirCodOrd(tLivro *lista){
    tLivro *aux;

    while(aux != NULL && aux->codigo < lista->codigo){

        aux->anterior = lista;
        lista = lista->proximo;

    }

    if(aux != NULL){
        if(aux->anterior != NULL){

            aux->anterior = lista;
            lista->proximo = aux;
            aux = lista;

        }else{

            lista->proximo = aux;
            lista->anterior = aux->anterior;
            aux->proximo = lista;
            aux->anterior = lista;

        }
    }else{
        if(aux->anterior == NULL){

            aux = lista;

        }else{

            lista->anterior = aux->anterior;
            aux->proximo = lista;
        }
    }

    while((aux == NULL) == 0){

        printf("Nome: %s", aux->nome);
        printf("Nome: %d", aux->codigo);
        printf("Nome: %.2f", aux->preco);
        printf("Nome: %d", aux->class);

    }




}


int main(int argc, char *argv[]){

    int opc = 0;

    tLivro *fLivro = (tLivro *)malloc(sizeof(tLivro));

    do{
        printf("\n");
        printf("== lista de livros duplamente encadeadas == \n");
        printf("1 - Adicionar no inicio \n");
        printf("2 - Adicionar no Final \n");
        printf("3 - Adicionar Apos \n");
        printf("4 - Adicionar Antes \n");
        
        switch(opc){
            case 1:
            
                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
        }


    }while(opc != 99);



    return 0;
}