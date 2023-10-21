/*
 * ex021.c
 *
 *  Criado em: 21 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

int main(){

	int tamanhoArray;

	printf("Digite o Tamanho do Array: ");
	fflush(stdout);
	scanf("%d", &tamanhoArray);

	if (tamanhoArray <= 0){
		printf("Tamanho Invalido!!!");
		return 1;
	}

	int array[tamanhoArray];
	int *use = array;

	printf("Digite os Elementos do Array:\n");
	fflush(stdout);

	for (int i = 0; i < tamanhoArray; i++){
		scanf("%d", &array[i]);
	}

	printf("\nArray Original: ");
	for (int i = 0; i < tamanhoArray; i++){
		printf("%d ", array[i]);
	}

	printf("\n");

	//Soma 1 a cada posicao do Array usando o ponteiro *use
	for (int i = 0; i < tamanhoArray; i++){
		(*use) += 1;
		use++;
	}

	printf("\nArray Apos a Adicao: ");
	for (int i = 0; i < tamanhoArray; i++){
		printf("%d ", array[i]);
	}

	printf("\n");

	return 0;
}
