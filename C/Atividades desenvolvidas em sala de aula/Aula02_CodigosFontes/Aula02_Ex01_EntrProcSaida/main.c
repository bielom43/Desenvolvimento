#include <stdio.h>
#include <stdlib.h>

/* Marcal, J.
   Programa: Calcular a media academica.
*/

int main(int argc, char *argv[]) {
	//DECLARACAO DE VARIAVEIS
	float vprova1, vprova2, vatividades, vmedia = 0.0;
	
	//ENTRADA
	printf("Digite a nota1: ");
	scanf("%f", &vprova1);
	printf("Digite a nota2: ");
	scanf("%f", &vprova2);
	printf("Digite a nota das atividades: ");	
	scanf("%f", &vatividades);
	
	//PROCESSAMENTO
	vmedia = (vprova1 * 0.4) + (vprova2 * 0.5) + (vatividades * 0.1);
	if (vmedia < 6.0) {
		//SAIDA
		printf("A media e: %f. REPROVADO!", vmedia);
	} else {
		if (vmedia > 8.0) {
			//SAIDA
			printf("A media e: %f. PARABENS APROVADO!!!", vmedia);	
		} else {
			//SAIDA
			printf("A media e: %f. APROVADO - Pode melhorar!!!", vmedia);	
		}
	}
		
	return 0;
}
