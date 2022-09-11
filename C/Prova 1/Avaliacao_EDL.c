#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


// struct SalaDeAula{

//     int QAlunos, IdadeAlunos, AlturaAlunos;
//     char Nomes[100];
//     float RendaAlunos;
// };

// struct SalaDeaula VSalaAula[100];


// int main(int argc, char *argv[]){


//   int i, vetLambdas[100], div2e3 = 0;


//     for(i = 0; i < 100; i++){

//         printf("Digite uma idade: ");
//         scanf("%d", &vetLambdas[i]);


//         if((vetLambdas[i]% 2 == 0) || (vetLambdas[i]% 3 == 0)){
            
//             div2e3 = div2e3 + 1;

//         }


//     }


//     printf("Diviseis por 2 e por 3 = %d \n", div2e3);



//   return 0;
// }


// void Percentual_faltas(float VHoras, float VFaltas) {

//     float result = 0;

//     result = (VFaltas * 100) / VHoras;

//     printf("O Percentual de faltas e igual a: %.2f\n\n", result);

// }

// void Media_Semestral(float av1, float av2, float trabalhoFinal) {

//     float mediaFinal;

//     mediaFinal = (av1 + 0.3) + (av2 * 0.4) + (trabalhoFinal * 0.4) / 3;

//     printf("O Resultado da media semestral e igual a: %.2f\n\n", mediaFinal);

// }

// void Aprovado(float mediaFinal) {

//     float media;

//     media = mediaFinal;

//     if(media > 5){
//         printf("O aluno esta acima da media!! \n");
//         printf("Aprovado!! \n");
//     }else{
//         printf("O aluno esta abaixo da media!! \n");
//         printf("Reprovado!! \n\n");
//     }

// }

// int main(int argc, char *argv[]) {
// 	//VARIAVEIS
// 	float p1, p2, trabalho, media, quantidadeHoras, quantidadeFaltas;
//     int opc = 0;
	
// 	//ENTRADAS
//     do{
//         printf("Digite a opcao desejada no menu: \n 1. Percentual de Faltas \n 2. Media Semestral \n 3. Aprovacao \n 9. Sair\n\n");
//         scanf("%d", &opc);

//         switch(opc){
//             case 1:
//                 printf("Digite a quantidade de horas do curso: \n");
//                 scanf("%f", &quantidadeHoras);
//                 printf("Digite a quantidade de faltas no curso: \n");
//                 scanf("%f", &quantidadeFaltas);
//                 Percentual_faltas(quantidadeHoras, quantidadeFaltas);
//                 break;
//             case 2:    
//                 printf("Digite o valor da prova 1: \n");
//                 scanf("%f", &p1);
//                 printf("Digite o valor da prova 1: \n");
//                 scanf("%f", &p2);
//                 printf("Digite o valor da prova 1: \n");
//                 scanf("%f", &trabalho);
//                 Media_Semestral(p1, p2, trabalho);
//                     break;
//             case 3:
//                 printf("Digite o valor da media final do aluno: \n");
//                 scanf("%f", &media);
//                 Aprovado(media);
//                 break;
//         }

// 	}while(opc!=9);

// 	return 0;
// }


// struct Livro {

//   int Codigo;

//   char Titulo[50];

//   float Preco;

// };

 

// int topo = -1;

// struct Livro pilhaLivros[100];

// void imprimir(struct LIVro *vetor)
// {   int i = 0; 
//     float preco;

//     printf("Digite o preço máximo desejado: \n");
//     scanf("%f", &preco);

//     for(i = 0; i < 100; i++)
//     {
//         if(preco > pilhaLivros[i].Preco && topo != -1)
//         {
//             printf("Codigo do livro: %i, titulo do livro: %s", pilhaLivros[i].Codigo, pilhaLivros[i].Titulo);
//         }


//     }
// }




// void total(fila *vetor){
//     int posi, total = 0, x = 0, somar = 0;
//     float media;

//     if(numValorFila == 0){
//         printf("Fila vazia! ");
//     }else{
//         posi = iFila;

//         for(i = 0; i < QTD; i++)
//         {
//             if(vetor[i].totalPedido != -1)
//             {
//                 somar += vetor[i].totalPedido;
//             }

//         }
//         printf("total de pedidos na fila %i", total);

//         for(i = 0;i<QTD;i++){
//             if(numValorFila > 0){
//                 x = numValorFila;
//             }
//         }
//         printf("O número de pedidos existentes na fila é de: %d",x);


//         media = somar / QTD;

//         printf("a media total dos pedidos: %f", media);

//     }
// }