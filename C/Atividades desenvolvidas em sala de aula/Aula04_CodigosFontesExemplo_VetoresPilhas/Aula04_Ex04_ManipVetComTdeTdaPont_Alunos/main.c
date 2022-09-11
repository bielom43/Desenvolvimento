#include <stdio.h>
#include <stdlib.h>

struct tdeAluno{
	int ra;
	char nome[10];
};


struct tdeAluno vetorAlunos[3];
int tamanhoVetor = 3;


//inicializa cada posicao do vetor com valores fixos
//que são considerados posições vazias.
void inicializandoVetor(struct tdeAluno *vetor, int tam) {
	int i = 0;
	
	for (i = 0; i < tam; i++) {
		vetor[i].ra = -1;
		strcpy(vetor[i].nome, "NULL");
	}	
}


//percorre o vetor e localiza uma posição vazia, note
//que o valor do campo 'ra' da posição do vetor vetor 
//que indica se a posição está vazia.
int obterPosicaoVazia(struct tdeAluno *vetor, int tam) {
	int i = 0;
	int posicao = -1;
	
	for (i = 0; i < tam; i++) {
		if ((vetor[i].ra == -1) & (posicao == -1)) {
			posicao = i;
		}
	}
	
	return posicao;	
}


//recebe os valores de 'ra' e 'nome' e os adiciona no
//vetor, perceba que este método utiliza o método que
//localiza uma posição vazia.
int adicionarAluno(int vra, char vnome[10], struct tdeAluno *vetor, int tam) {
	int posicao = -1;
	
	posicao = obterPosicaoVazia(vetor, tam);
	
	if (posicao >= 0) {
		vetor[posicao].ra = vra;
		strcpy(vetor[posicao].nome, vnome);
	}

	return posicao;	
}


//percorre o vetor e exibe o valor de cada posição.
void imprimirAlunos(struct tdeAluno *vetor, int tam) {
	int i = 0;
	
	for (i = 0; i < tam; i++) {
		printf("%d - ra: %d - nome: %s; \n", i, vetor[i].ra, vetor[i].nome);
	}	
}

int main(int argc, char *argv[]) {
	int opc = 0;
	
	while (opc != 9) {
		printf("\n");
		printf(":: ALUNOS ::    \n");
		printf("1. iniciar base \n");
		printf("2. adicionar    \n");
		printf("3. imprimir base\n");
		printf("9. Sair \n");
		printf("Digite a opcao desejada: ");
		
		scanf("%d", &opc);
		
		if (opc == 1) {
			inicializandoVetor(vetorAlunos, tamanhoVetor);
			
		} else if (opc == 2) {
			int ra = 0;
			char nome[10];
			
			printf("Digite o ra: ");
			scanf("%d", &ra);
			printf("Digite o nome: ");
			scanf("%s", &nome);
			
			adicionarAluno(ra, nome, vetorAlunos, tamanhoVetor);
			
		} else if (opc == 3) {
			imprimirAlunos(vetorAlunos, tamanhoVetor);
			
		}		
	}
	
	return 0;
}
