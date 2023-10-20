/*
 * ex018.c
 *
 *  Criado em: 20 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

#define PI 3.14159265359

void calc_esfera(float R, float *area, float *volume){
	*area = 4 * PI * R * R;
	*volume = (4.0 / 3) * PI * R * R * R;
}

int main(){

	float raio;
	float area;
	float volume;

	printf("Digite o Raio da Esfera: ");
	fflush(stdout);
	scanf("%f", &raio);

	calc_esfera(raio, &area, &volume);

	printf("\nArea da Superficie da Esfera: %.2f\n", area);
	printf("Volume da Esfera: %.2f\n", volume);

	return 0;
}
