#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define QTD 10

struct Veiculo{

    char placa[QTD];//A placa sera char, pois o numero de placa geralmente tem tambem caracters
    char Nome_Motorista[QTD];
    int Total_p;

};

struct Veiculo Carro[QTD];
int ini_fila = -1, fim_fila = -1, valores_fila = 0;
//Variaveis para controle da fila
int i = 0;
//Contador global


void start(struct Veiculo *vetor){

    for(i; i<QTD; i++){
        vetor[i].Total_p = -1;
        strcpy(vetor[i].Nome_Motorista,"NULL");
        strcpy(vetor[i].placa,"NULL");
    }

    printf("A FILA FOI INICIADA COM SUCESSO!\n");

}

void adc(struct Veiculo *vetor){

    char Mot_nome[QTD], Car_placa [QTD] ;

    printf("Digite o nome do motorista: \n");
    scanf("%s", Mot_nome);
    printf("Digite o numero da placa: \n");
    scanf("%s", Car_placa);

    if(valores_fila == QTD){
        printf("A Fila ja esta cheia!");
    } else {
      if(fim_fila == -1){
          ini_fila = 0;
          fim_fila = 0;
      } else {
          if(fim_fila ==(QTD + 1)){
              fim_fila = 0;
          }else {
              fim_fila = fim_fila + 1;
          }

      }

        strcpy(vetor[fim_fila].Nome_Motorista, Mot_nome);
        strcpy(vetor[fim_fila].placa, Car_placa);


        valores_fila = valores_fila + 1;

        printf("Carro adicionado na fila!\n");
    }


}


void mostrar_fila(struct Veiculo *vetor){

    int pos = ini_fila;
    
    printf("Comeco da Fila: %d \n", pos);
    printf("Fim da Fila: %d \n", fim_fila);
    printf("Total de pedidos na fila: %d \n", valores_fila);
    

        printf("Posicao %d da fila. \n Nome do motorista: %s \n Placa do seu veiculo: %s\n", pos, vetor[pos].Nome_Motorista, vetor[pos].placa);

        if(pos == (QTD - 1)){
            pos = 0;
        } else {
            pos = pos + 1;
        }
}




int main(int argc, char *argv[]){

    int opc;
    
    do{
        printf("===============Fila Drive Thru===============\n\n");
        printf("  0 - Inicializar fila\n");
        printf("  1 - Adicionar Veiculo a Fila\n");
        printf("  2 - Atender (remover)\n");
        printf("  3 - Veiculos na Fila\n");
        printf("  4 - numero de veiculos na fila para serem atendidos\n");
        printf("  5 - Pesquisar (Placa)\n");
        printf("  99 - Sair\n");
        printf("  Escolha a opcao desejada: \n");
        scanf("%d", &opc);
        

            switch(opc){
                case 0:
                    start(Carro);
                    break;
                case 1:
                    adc(Carro);
                    break;
                case 2:
                    mostrar_fila(Carro);
                    break;
                case 3:
                    mostrar_fila(Carro);
                    break;
        }

    }while(opc!=99);


    return 0;
}