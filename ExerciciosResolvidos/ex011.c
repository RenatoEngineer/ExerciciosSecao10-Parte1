/*
 * ex011.c
 *
 *  Criado em: 17 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

int main(){

	int array[5];

	printf("Digite 5 Valores Inteiros:\n");
	for (int i = 0; i < 5; i++){
		fflush(stdout);
		scanf("%d", &array[i]);
	}

	printf("\nEndereco das Posicoes com valores Pares:\n");
	for (int i = 0; i < 5; i++){
		if (array[i] % 2 == 0){
			printf("Endereco de Array [%d]: %p\n", i, (void *)&array[i]);
		}
	}

	return 0;
}
