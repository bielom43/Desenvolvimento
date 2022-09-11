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
	
	//ENTRADAS
	scanf("%f", &vb);
	scanf("%f", &va);
	scanf("%f", &vl);
	
	//PROCESSAMENTO
	varea = areaRetangulo(vb, va);
	printf("Area retangulo: %f. \n", varea);

	varea = areaTriangulo(vb, va);
	printf("Area triangulo: %f. \n", varea);
	
	varea = areaQuadrado(vl);
	printf("Area quadrado: %f. \n", varea);
	
	return 0;
}
