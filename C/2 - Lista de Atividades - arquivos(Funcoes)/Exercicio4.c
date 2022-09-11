#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define tam 10

//Definicao de Variaveis e Vetores globais
int i = 0;
float salarios[tam];

//Funcoes que irao ser executadas conforme solicitadas na funcao principal(main)

    //Funcao ini tem como objetivo inicializar o vetor com -1 em todas as posicoes
    void ini(float salarios_ini[tam]){

        for (i = 0; i < tam; i++)
        {
            salarios_ini[i] = -1;
        }

    }

    //Funcao adicionar tem como objetivo carregar o vetor com os valores que o usuario digitar
    void adicionar(float carregar_salario[tam]){
        
        printf("Digite os salarios que deseja adicionar: \n");

        for (i = 0; i < tam; i++)
        {
            scanf("%f", &carregar_salario[i]);
        }
        //limpeza de ambiente
        system("cls");
        
    }

    //Funcao imprimir tem como objetivo mostrar ao usuario quais valores estao quais posicoes
    void imprimir(float imprimir_vet[tam]){
        int cont = 1;
        
        //loop
        for(i = 0; i < tam; i++){
            //Para caso houver valor igual a zero nao mostrar
            if(imprimir_vet[i]==0){
                printf("");
            } 
            else{
                //mostra todos os valores do vetor
                printf("Valor presente na posicao %d do vetor: %.2f \n", cont++, imprimir_vet[i]);
            }
            
        }
        //breve pausa para que o usuario possa visualizar as informacoes
        system("pause");
        //limpeza de ambiente
        system("cls");

    }

    //Funcao que remove os valores selecionados da funcao
    void remover(float vet_remover[tam]){
        float rvalor;

        printf("Digite o salario que quer remover: \n");
        scanf("%f", &rvalor);

        for(i=0; i < tam; i++){
            if(vet_remover[i] == rvalor){
                vet_remover[i] = vet_remover[i+1];
                vet_remover[i+1] = rvalor;
            }
        }
    }

    //Funcao que pesquisa valores desejados no vetor e exibe sua posicao
    void pesquisa(float vet_pesquisa[tam]){

        float salario;

        printf("Digite a seguir o salario, cujo deseja saber a posicao no vetor: \n");
        scanf("%f", &salario);

        for(i=0; i < tam; i++){
            if(salario == vet_pesquisa[i]){
                printf("O valor que deseja se encontra na posicao %d do vetor\n", i+1);
            }else {
                printf("O valor nao existe nesse vetor, tente novamente!\n");
                break;
            }
        }
        printf("Voltando para o menu principal...");

        system("pause");
        system("cls");
    }

    //Somar todos os salarios
    float somar(float vet_soma[tam]){

        float total;

        for(i=0; i < tam; i++){
            total = total + vet_soma[i];
        }

        printf("A soma de todos os salarios presentes neste vetor e igual a: %.2f\n", total);

        system("pause");
        system("cls");
        return total;
    }

    //Soma um valor X a outros iguais a ele no mesmo vetor
    float somarX(float vet_somaX[tam]){

        float salario, totalX;

        printf("Digite o salario que deseja somar \n");
        scanf("%f", &salario);

        for(i=0; i < tam; i++){

            if(salario == vet_somaX[i]){

                totalX = totalX + vet_somaX[i];

            }
        }
        printf("Os salarios somados sao iguais a: %.2f \n", totalX);

        system("pause");
        system("cls");

        return totalX; 
    }

    //Imprime todos os valores menor que um valor X digitado pelo usuario
    void imp_MQX(float salariosX[tam]){

        int x;

        printf("Abaixo de qual salario deseja imprimir: ");
        scanf("%d", &x);

        for(i=0; i < tam; i++){

            if(salariosX[i] < x){
                printf("%.2f \n", salariosX[i]);
            }
        } 

        system("pause");
        system("cls");
    }

    float media(float media_sal[tam]){
        
        float total, media_final;

        for(i=0; i < tam; i++){
            total = total + media_sal[i];
        }

        media_final = total / tam;

        printf("A media salarial e igual a: %.2f\n", media_final);

        system("pause");
        system("cls");
        return total;
    }

    void adcvalor(float vet_salario[tam]){
        float x;
        int pos;

        printf("Digite o valor que deseja inserir: \n");
        scanf("%f", &x);
        printf("Digite a posicao na qual quer que o valor seja inserido: \n");
        scanf("%d", &pos);

        for(i=0; i < tam; i++){
            if(pos == i){
                vet_salario[i - 1] = x;
                printf("O valor %.2f foi inserido na posicao %d do vetor...\n", x, i);
                break;
            }
        }

    }
//funcao principal cujo objetivo executar outras funcoes e rodar os comandos com prioridade primmaria que outras funcoes
int main(int argc, char *agrv[]){
    setlocale(LC_ALL,"");

    int escolha;

    ini(salarios);

     while(escolha != 99){

         printf("*********************************************\n");
         printf("************** MENU - SALARIOS **************\n");
         printf("*********************************************\n");

         printf("01 - Adicionar\n");

         printf("02 - Remover posicao Y\n");

         printf("03 - Imprimir todos\n");

         printf("04 - Pesquisar salario X\n");

         printf("05 - Adicionar na posicao \n");

        //  printf("06 - Pesquisar o quantidade salários X (deverá solicitar do usuário um salário e contar quantas vezes este salário existe no vetor)\n");

         printf("07 - Somar salarios\n");

         printf("08 - Somar salarios X\n");

        //  printf("09 - Contar salários\n");

        // printf("10 - Contar salários X\n");

        // printf("11 - Contar salários maiores que X\n");

        // printf("12 - Maior salário\n");

        // printf("13 - Menor salário\n");

        printf("14 - Media salarios\n");

        // printf("15 - Remover salários valor X\n");

        // printf("16 - Remover todos salários\n");

        // printf("17 - Imprimir salário posição Y\n");

        printf("18 - Imprimir salarios menores que X\n");

        // printf("19 - Aplicar acréscimo de Z%% em todos salários\n");

        // printf("20 - Aplicar desconto de Z%% em salários maiores que X\n");

        printf("99 - Sair.\n");
        
        printf("Escolha qual a opcao desejada no menu de acordo com seu numero: \n");
        scanf("%d", &escolha);
        system("cls");

         switch (escolha){
             case 1:
            adicionar(salarios);
                 break;
            
             case 2:
            remover(salarios);
                 break;
            
             case 3:
            imprimir(salarios);
                break;
            
            case 4:
            pesquisa(salarios);
                break;
            
            case 5:
            adcvalor(salarios);
                break;
            
            case 6:
            ini(salarios);
                break;
            
            case 7:
            somar(salarios);
                break;
            
            case 8:
            somarX(salarios);
                break;
            
            case 9:
            ini(salarios);
                break;
            
            case 10:
            ini(salarios);
                break;

            case 11:
            ini(salarios);
                break;

            case 12:
            ini(salarios);
                break;

            case 13:
            ini(salarios);
                break;

            case 14:
            media(salarios);
                break;

            case 15:
            ini(salarios);
                break;

            case 16:
            ini(salarios);
                break;

            case 17:
            ini(salarios);
                break;

            case 18:
            imp_MQX(salarios);
                break;

            case 19:
            ini(salarios);
                break;

            case 20:
            ini(salarios);
                break;

            // ---------------------------------------------

            // 04 - Pesquisar salário X (deverá solicitar do usuário o salário desejado e pesquisar se existe no vetor, caso exista, deverá exibir a posição que o mesmo está armazenado)

            // 05 - Adicionar na posição (deverá solicitar do usuário o valor do salário e posição que deseja armazena-lo no vetor caso a mesma não esteja ocupada) 

            // 06 - Pesquisar o quantidade salários X (deverá solicitar do usuário um salário e contar quantas vezes este salário existe no vetor)

            // 07 - Somar salários

            // 08 - Somar salários X

            // 09 - Contar salários

            // 10 - Contar salários X

            // 11 - Contar salários maiores que X

            // 12 - Maior salário

            // 13 - Menor salário

            // 14 - Média salários

            // 15 - Remover salários valor X

            // 16 - Remover todos salários

            // 17 - Imprimir salário posição Y

            // 18 - Imprimir salários menores que X

            // 19 - Aplicar acréscimo de Z% em todos salários

            // 20 - Aplicar desconto de Z% em salários maiores que X

            // 99 - Sair.
        }
    }
    

    return 0;
}