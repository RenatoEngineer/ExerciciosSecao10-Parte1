/*
 * ex009.c
 *
 *  Criado em: 16 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

int main(){

	float matriz[3][3];

	printf("Digite os Valores da Matriz 3x3:\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Elemento [%d][%d]: ", i, j);
			fflush(stdout);
			scanf("%f", &matriz[i][j]);
		}
	}

	printf("\nEnderecos de Memoria de Cada Posicao da Matriz:\n");
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			printf("Endereco da Matriz [%d][%d]: %p\n", i, j, (void *)&matriz[i][j]);
		}
	}

	return 0;
}
