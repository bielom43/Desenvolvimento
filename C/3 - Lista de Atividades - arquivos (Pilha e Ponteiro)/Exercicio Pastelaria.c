// MARÇAL, J.

// ----------------
// CONTEÚDO
// ----------------
// - ATIVIDADE: Trabalho valendo nota para entrega FUTURA em sala;
// - CONTEÚDO : Manipulação de pastelores com tipos de dados estruturados;
// - CONTEXTO : O trabalho será dividido em duas partes, na primeira o aluno desenvolverá o menu e interações básicas, a segunda parte (dependente da primeira) 
//é que realmente vale nota, o professor solicitará novas funcionalidades que deverão ser desenvolvidas individualmente, estas funcionalidades deverão ser apresentadas 
//para o professor que corrigirá e dará nota.

// ----------------
// CENÁRIO
// ----------------
// A barraca gourmet PASTEL DELICIA está iniciando suas atividades próximo a faculdade, esta pastelaria vende apenas pasteis de carne e nenhum outro sabor a mais, 
//sua única variação corresponde ao tamanho que se dividem em Pequeno (R$ 3.50), Médio (R$ 4.50) e Grande (R$ 5.50), para agilizar o atendimento cada pedido só poderá conter
// pasteis do mesmo tamanho, esta regra apesar de simples é fundamental para que a produção seja rápida e eficiente pois o tempo de intervalo na faculdade é curto.

// Para gerenciar a venda dos pasteis foi solicitado o desenvolvimento de um sistema simples com operações básicas conforme descritas abaixo.

// a) A primeira versão do sistema (versão beta) suporta apenas a venda de no máximo 10 pedidos sem pagamento, é importante lembrar que o sistema 
// controla apenas os pedidos não pagos, os pedidos pagos saem do sistema liberando espaço para outro pedido.
// b) Cada pedido registrado deverá conter as seguintes informaçôes: Número pedido; tamanho; Quantidade.
// c) O sistem deve ser interativo, ou seja, permitir que o seu operador venda, imprima, consulte, etc.
// d) Operações básicas do sistema (Parte 1 de 2):
// 	1. Venda (Localiza uma posição vazia e registra as informações: núm. pedido, tamanho, quantidade).
// 	2. Impressão pedidos a pagar (exibe na tela todos os pedidos não pagos).
// 	3. dContar número vendas a pagar (exibe na tela o número de pedidos presentes na lista).
// 	4. Pagamento (localiza pelo número do pedido e remove da lista).
// d1) Outras opções podem ser adicionadas conforme o aluno/programador preferir, mas as opções apresentadas aqui nesta relação devem obrigatoriamente existir.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define tam 10

int i=0;

struct pedido{
    int NumeroPedido, Quantidade;
    char tamanho;
};

struct pedido pastel[tam];

void ini(struct pedido pastel[tam]){

    for(i; i < tam; i++){
        pastel[i].NumeroPedido = -1;
        pastel[i].Quantidade = -1;
        pastel[i].tamanho = 'N/A';
    } 
    
    printf("Vetor inicializado!\n");

    system("pause");
    system("cls");
}

void vender(struct pedido pastel[tam]){
    int contador;

    for(i; i < tam; i++){
        if((pastel[i].NumeroPedido = -1 )|| (pastel[i].Quantidade = -1) || (pastel[i].tamanho = -1)){
            contador += 1;
        }
    }

    for(i; i < contador; i++){

    };
}

int main(int argc, char *argv[]){
    
    int decisao;

    system("color 6");

    while(decisao!=99){

        printf("-----------------------------------------------------\n");
        printf("----------------PASTEIS DELICIA - MENU---------------\n");
        printf("-----------------------------------------------------\n\n");

        printf("1 - Inicializar\n");
        printf("2 - Vender\n");
        printf("3 - Mostrar pedidos ainda nao pagos  \n");
        printf("4 - Numero de vendas\n");
        printf("5 - Pagamento\n");
        printf("0 - Sair\n");
        
        printf("Digite qual opcao deseja executar: ");
        scanf("%d", &decisao);
        
        system("cls");
        
        switch(decisao){

            case 1:
                ini(pastel);
                break;
            // case 2:
            //     vender(pastel);
            //     break;
            // case 3:
            //     imprimir_pedidos(pastel);
            //     break;
            // case 4:
            //     num_vendas(pastel);
            //     break;
            // case 5:
            //     pagamento(pastel);
            //     break;

        }
    }




    return 0;
}