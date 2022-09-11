#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define QTD 100	

int i = 0;

typedef struct{

	int RA, IDADE;
	char nome[50];
	float MENSALIDADE;

}aluno;

aluno Vet_Aluno[QTD];

void incializar(aluno *vetor){
	
	for(i = 0; i  < QTD; i++){
		
		vetor[i].IDADE = -1;
		vetor[i].RA = -1;
		vetor[i].MENSALIDADE = -1;
		strcpy(vetor[i].nome, "NULL");
	}
	
	printf("Vetor iniciado!\n\n");
}

void imprimir_vetor(aluno *vetor){

	int pos = 1;

	for(i = 0; i < QTD; i++){

		printf("Posicao %d \n", pos++);
		printf("Aluno: %s \n", vetor[i].nome);
		printf("Idade: %d\n", vetor[i].IDADE);
		printf("RA: %d\n", vetor[i].RA);
		printf("Mensalidade: %.2f\n\n", vetor[i].MENSALIDADE);
	
	}


}

void cadastrar(aluno *vetor){

	for(i = 0; i < QTD; i++){	

		if(vetor[i].RA == -1){

			printf("Digite o nome do aluno: \n");
			scanf("%s", &vetor[i].nome);
			printf("Digite o RA do aluno: \n");
			scanf("%d", &vetor[i].RA);
			printf("Digite a idade deste aluno: \n");
			scanf("%d", &vetor[i].IDADE);
			printf("Digite a mensalidade deste aluno: \n");
			scanf("%f", &vetor[i].MENSALIDADE);
			printf("\n\n");
		
		} 
	}
}

void pesquisar(aluno *vetor){

	int RA_ALUNO = 0;

	printf("Digite o RA do aluno que deseja obter as informacoes: ");
	scanf("%d", &RA_ALUNO);

	for(i = 0; i < QTD; i++){
		
		if(RA_ALUNO == vetor[i].RA){
			
			printf("Nome do Aluno: %s\n", vetor[i].nome);
			printf("Idade do Aluno: %d\n", vetor[i].IDADE);
			printf("Ra do Aluno: %d\n", vetor[i].RA);
			printf("Mensalidade do Aluno: %.2f\n\n", vetor[i].MENSALIDADE);

		}
	}

	
}

void remover_aluno(aluno *vetor){

	int raAluno;

	printf("Digite o RA do aluno que deseja remover: \n");
	scanf("%d", &raAluno);

	for(i = 0; i < QTD; i++){

		if(raAluno == vetor[i].RA){
		
			vetor[i].IDADE = -1;
			vetor[i].RA = -1;
			vetor[i].MENSALIDADE = -1;
			strcpy(vetor[i].nome, "NULL");

		}

	}

	printf("\nAluno removido!\n\n");
}

void maior_idade(aluno *vetor){
	
	int maiorId = 0;

	for(i = 0; i < QTD; i++){

		if(vetor[i].IDADE > maiorId){

			maiorId = vetor[i].IDADE;

		}

	}

	printf("A maior idade e: %d \n\n", maiorId);

}

float media_mensalidade(aluno *vetor){

	float media = 0, mediaTotal = 0;

	for(i = 0; i < QTD; i++){

		media += vetor[i].MENSALIDADE;
	
	}

	mediaTotal = media/QTD;

	printf("A media das mensalidade e: %.2f \n\n", mediaTotal);
	
}

void MaioresEMenoresQueX(aluno *vetor){
    int idade;

    printf("Insira a Idade: \n");
    scanf("%d", &idade);

    for(i = 0; i < QTD; i++)
    {
        if(vetor[i].IDADE > idade || vetor[i].IDADE < idade)
        {
            printf("\n\nRA: %i\nidade: %i\nNome: %s\nMensalidade: %f\n\n", vetor[i].RA, vetor[i].IDADE, vetor[i].nome, vetor[i].MENSALIDADE);
        }
    }


}

void relacaoAcimaMedia(aluno *vetor){

	float media = 0, mediaTotal = 0;
		
	for(i = 0; i < QTD; i++){

		media += vetor[i].MENSALIDADE;

	}

	mediaTotal = media/QTD;

    for(i = 0; i < QTD; i++)
        {
            if (vetor[i].MENSALIDADE > mediaTotal)
            {
                printf("\nO RA: %i tem a mensalidade acima da media\n", vetor[i].RA);
            }
        }

	printf("Relacao media de salarios: %.2f\n\n", mediaTotal);
}

int main(int argc, char *argv[]){

 	int opc;
 	
 	
 	do{
 		printf("Menu de vetores alunos\n");
 		printf("0 - Imprimir vetor (utilizar apenas apos inicializacao do vetor)\n");
 		printf("1 - Inicializar vetor\n");
 		printf("2 - Cadastrar\n");
		printf("3 - Pesquisar (RA)\n");
		printf("4 - Remover (RA)\n");
		printf("5 - Maior idade\n");
		printf("6 - Media mensalidade\n");
		printf("7 - Numero alunos acima e abaixo idade X\n");
		printf("8 - Relacao alunos com mensalidade acima da Medida\n");
 		
 		printf("Digite a opcao desejada: \n");
 		scanf("%d", &opc);
 		printf("\n\n");

 		switch(opc){
			case 0:
				imprimir_vetor(Vet_Aluno);
				break;
 			case 1:
				incializar(Vet_Aluno);
			 	break;	
			case 2:
			 	cadastrar(Vet_Aluno);
			 	break;
			case 3:
			 	pesquisar(Vet_Aluno);
			 	break;
			case 4:
			 	remover_aluno(Vet_Aluno);
			 	break;
			case 5:
			 	maior_idade(Vet_Aluno);
			 	break;
			case 6:
			 	media_mensalidade(Vet_Aluno);
			 	break;
			case 7:
			 	MaioresEMenoresQueX(Vet_Aluno);
			 	break;
			case 8:
			 	relacaoAcimaMedia(Vet_Aluno);
			 	break;
	}	
 		
 	
	 	
	}while(opc!=9);
 	
 	




	return 0;
}
