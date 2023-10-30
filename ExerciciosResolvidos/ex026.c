/*
 * ex026.c
 *
 *  Criado em: 30 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>
#include <math.h>

int raizes(float A, float B, float C, float *X1, float *X2){
	float delta = B * B - 4 * A * C;

	if (A == 0){
		//Se A for igual a Zero, a equacao nao e do Segundo Grau
		return 0; //Nenhuma Raiz
	} else if (delta < 0){
		//Nao ha Raizes Reais
		return 0;
	} else if (delta == 0){
		//Uma Raiz Real
		*X1 = -B / (2 * A);
		*X2 = *X1;
		return 1;
	} else {
		//Duas Raízes Reais Distintas
		*X1 = (-B + sqrt(delta)) / (2 * A);
		*X2 = (-B - sqrt(delta)) / (2 * A);
		return 2;
	}
}

int main(){

	float A, B, C, X1, X2;
	printf(".:: Digite os Coeficientes da Equacao de Segundo Grau ::.\n");

	printf("A: ");
	fflush(stdout);
	scanf("%f", &A);

	printf("B: ");
	fflush(stdout);
	scanf("%f", &B);

	printf("C: ");
	fflush(stdout);
	scanf("%f", &C);

	int numRaizes = raizes(A, B, C, &X1, &X2);

	if (numRaizes == 0){
		printf("\nNao Existem Raizes Reais!!!\n");
	} else if (numRaizes == 1){
		printf("\nExiste uma Raiz Real: X1 = %.2f\n", X1);
	} else {
		printf("\nExistem duas Raizes Reais Distintas:\nX1 = %.2f\nX2 = %.2f\n", X1, X2);
	}

	return 0;
}
