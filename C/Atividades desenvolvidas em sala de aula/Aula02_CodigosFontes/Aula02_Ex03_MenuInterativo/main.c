#include <stdio.h>
#include <stdlib.h>

/* Marcal, J.
   Crie uma aplicacao que calcule a area das seguintes 
   figuras geometricas: Retangulo, Quadrado, Triangulo.
   Utilize funcoes para calculo das areas.
*/

float areaRetangulo(float vbase, float valtura) {
	float area = 0.0;
	
	area = (vbase * valtura);
	return area;	
}

float areaTriangulo(float vbase, float valtura) {
	float area = 0.0;
	
	//area = (vbase * valtura) / 2;
	area = areaRetangulo(vbase, valtura) / 2;
	return area;
}

float areaQuadrado(float vlado) {
	float area = 0.0;
	
	area =  areaRetangulo(vlado, vlado);
	return area;
}

int main(int argc, char *argv[]) {
	//VARIAVEIS
	float vb, va, vl, varea = 0.0;
	int opc = 0;
	
	do {
		printf("\n");
		printf("CALCULAR AREAS \n");
		printf("1. retangulo   \n");
		printf("2. triangulo   \n");
		printf("3. quadrado    \n");
		printf("9. sair        \n");
		printf("Digite opcao:  \n");
		scanf("%i", &opc);
		
		if (opc == 1) {
			scanf("%f", &vb);
			scanf("%f", &va);

			varea = areaRetangulo(vb, va);
			printf("Area retangulo: %f. \n", varea);
						
		} else if (opc == 2) {
			scanf("%f", &vb);
			scanf("%f", &va);
			
			varea = areaTriangulo(vb, va);
			printf("Area triangulo: %f. \n", varea);
			
		} else if (opc == 3) {
			scanf("%f", &vl);
			
			varea = areaQuadrado(vl);
			printf("Area quadrado: %f. \n", varea);			
		}
	} while (opc != 9);
	
	return 0;
}
