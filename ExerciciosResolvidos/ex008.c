/*
 * ex008.c
 *
 *  Criado em: 14 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

int main(){

	float array[10];

	printf("Digite os Valores dos Elementos do Array:\n");
	for (int i = 0; i < 10; i++){
		printf("Elemento %d: ", i + 1);
		fflush(stdout);
		scanf("%f", &array[i]);
	}

	printf("\n");

	//Imprime os Enderecos de Memoria
	for (int i = 0; i < 10; i++){
		printf("Endereco do Array [%d]: %p\n", i, (void *) &array[i]);
	}


	return 0;
}
