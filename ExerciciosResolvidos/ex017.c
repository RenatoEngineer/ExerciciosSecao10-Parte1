/*
 * ex017.c
 *
 *  Criado em: 19 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

void frac(float num, int *inteiro, float *fracionario){
	*inteiro = (int)num;             //Converte para int para obter a parte inteira
	*fracionario = num - *inteiro;  //Subtrai a parte inteira para obter a parte fracionaria
}

int main(){

	float numero;
	int parteInteira;
	float parteFracionaria;

	printf("Digite um Numero Real: ");
	fflush(stdout);
	scanf("%f", &numero);

	frac(numero, &parteInteira, &parteFracionaria);

	printf("\nParte Inteira: %d\n", parteInteira);
	printf("Parte Fracionaria: %.2f\n", parteFracionaria);

	return 0;
}
