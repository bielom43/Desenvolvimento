
#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#define QTD 10

struct vendas{
	int numPedido;
	char tamanho;
	int quantidade;
};

struct vendas vet_pastel[QTD];

int qtdPedidos(struct vendas vetor[QTD]){
	int i = 0, a = 0;
	for(i;i<QTD;i++){
		if(vet_pastel[i].numPedido != 0)
			a+=1;		
	}
	return a;
}


void inicializar(struct vendas vetor[QTD]){
	int i = 0;
	
	for(i;i<QTD;i++){
		vetor[i].numPedido = 0;
		vetor[i].tamanho = 0;
		vetor[i].quantidade = 0;
			
	}
	printf("\n""Vetor inicializado!\n\n");
}


void pedido(struct vendas vetor[QTD]){
	int i=0;
	int nPedidos;

	printf("\n""Insira quantos pedidos deseja fazer: ");
	scanf("%d",&nPedidos);
	
	
	if(nPedidos>10)
		printf("N�mero total m�ximo de pedidos � 10!\n");
	else{
		int x = qtdPedidos(vet_pastel);
		for(i = x;i<x+nPedidos;i++){
			if(vetor[i].numPedido == 0){	
				printf("Insira o n�mero do pedido: ");
				scanf("%d", &vetor[i].numPedido);
				getchar();
					
				printf("Insira qual o tamnaho dos past�is: ");
				scanf("%d", &vetor[i].tamanho);
				getchar();
						
				printf("Insira a quantidade dos past�is: ");
				scanf("%d", &vetor[i].quantidade);
				getchar();
			}			
		}
	}
}


void pedidos_nao_pagos(struct vendas vetor[QTD]){
	int i=0;
	
	for(i;i<QTD;i++){
		if(vetor[i].numPedido == 0){
		
		}
		else
			printf("\n""Pedido %d n�o foi pago\n",vetor[i].numPedido);	
	}
}

void vendas_a_pagar(struct vendas vetor[QTD]){
	int i=0, a=0;
	
	for(i;i<QTD;i++){
		if(vetor[i].numPedido > 0)
		{	
			a=a+1;
		}
	}
	
	printf("\n""Os pedidos n�o pagos s�o: %i\n",a);
}

void pagamento(struct vendas vetor[QTD]){
	int i=0;
	int pedido_paga;
	
	printf("\n""Insira o n�mero do pedido que deseja pagar: ");
	scanf("%d", &pedido_paga);
	
	for(i;i<QTD;i++){
		if(pedido_paga == vetor[i].numPedido){
			vetor[i].numPedido = 0;
			printf("O pedido N� %d foi pago!",pedido_paga);
		}
	}
}


int main(int argc, char *argv[])
{
	setlocale(LC_ALL, "");

	int opc;

	while (opc != 99) {
			printf("\n");
			printf("\n""1. Inicializar \n");
			printf("2. Venda  \n");
			printf("3. Impress�o pedidos a pagar \n");
			printf("4. Contar n�meros de vendas a pagar \n");
			printf("5. Pagamento \n");
			printf("99. Sair \n");
			printf("Digite a opcao desejada: ");
			
			scanf("%d", &opc);


		
		switch(opc){
			case 1:
				inicializar(vet_pastel);
				break;
			case 2:
				pedido(vet_pastel);
				break;
			case 3:
				pedidos_nao_pagos(vet_pastel);
				break;
			case 4:
				vendas_a_pagar(vet_pastel);
				break;
			case 5:
				pagamento(vet_pastel);
				break;
			case 99:
				break;
		}
	}
	return 0;
}

