#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct container{

    //dados para empilhamento
    int codigo;
    char fornecedor[15];
    float peso;

    //ponteiro de ligacao
    struct container *no;

};

//def types
typedef struct container tpilha;
typedef tpilha *pilha;

//variaveis
pilha toppilha;
int check;

//Inicializacao
tpilha* ini(pilha k){
    
    k = NULL;
    return k;

}



tpilha* empilhar(pilha topo){

    pilha item;
    int vcodigo;
    char vfornecedor[15];
    float vpeso;

    printf("\nDigite o nome do fornecedor: \n");
    scanf("%s", vfornecedor);
    printf("Digite o codigo de fornecedor: \n");
    scanf("%d", &vcodigo);
    printf("Digite o peso do produto: \n");
    scanf("%f", &vpeso);

    item = malloc(sizeof(tpilha));
    item->codigo = vcodigo;
    strcpy(item->fornecedor, vfornecedor);
    item->peso = vpeso;

    item->no = topo;

    return item;
}

tpilha* desempilhar(pilha topo){
    pilha sup;

    if(topo == NULL){
        printf("\n\nA pilha esta vazia!\n\n");

    }else{
        sup = topo;

        sup = topo->no;
        free(topo);

        return sup;
    }
}

void imprimir(pilha topo) {
	pilha sup;
	
	if (topo == NULL)	 {
		printf("\n\nA pilha esta vazia! \n\n");
	} else {
		sup = topo;
		
		while (sup != NULL) {
			printf("\nFornecedor: %s \nCodigo: %d \nPeso: %.2f \n\n", sup->fornecedor, sup->codigo, sup->peso);
			sup = sup->no;
		}
	}
}

int checar(pilha topo){
    
    if(topo == NULL){
        check = 1;
    }else{
        check = 0;
    }


    return check;
}

void topo(pilha topo){
    pilha sup;

    if(topo == NULL){
        printf("A pilha esta vazia!\n\n");
    }else{
        sup = topo;

        printf("\nFornecedor: %s \n Codigo: %d \n Peso: %.2f \n\n", sup->fornecedor, sup->codigo, sup->peso);

    }

}

void quantidadeElement(pilha topo)
{
    pilha sup;

    int cont = 0;

    if (topo == NULL)
    {
        printf("\n\nA pilha esta vazia! \n\n");
    }
    else
    {
        sup = topo;

        while (sup != NULL)
        {
            cont++;
            sup = sup->no;
        }

        printf("Quantidade de itens na pilha: %d", cont);
    }
}

int main(int argc, char *argv[]){
    int op = 0;
    
    toppilha = ini(toppilha);

    do{
        printf("\n\nPILHAS DINAMICAS\n");
        printf("1 - Empilhar\n");
        printf("2 - Desempilhar\n");
        printf("3 - Imprimir\n");
        printf("4 - Checar pilha (0 = Vazia) (1 = cheia)\n");
        printf("5 - Topo\n");
        printf("6 - Quantidade de elementos na pilha\n");
        printf("99 - Sair\n\n");
        
        printf("Digite a opcao desejada: \n");
        scanf("%d", &op);
        

        switch(op){
            case 1: 
                toppilha = empilhar(toppilha);
                break;
            case 2: 
                toppilha = desempilhar(toppilha);
                break;
            case 3:
                imprimir(toppilha);
                break;
            case 4:
                checar(toppilha);
                printf("\nVerificacao = %d \n\n", check);
                break;
            case 5:
                topo(toppilha);
                break;
            case 6:
                quantidadeElement(toppilha);
                break;
        }


    }while(op!=99);
    
    return 0;
}