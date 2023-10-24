/*
 * ex022.c
 *
 *  Criado em: 24 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

int somaArrays(int *array1, int tamanho1, int *array2, int tamanho2, int *resultado, int *tamanhoResultado){
	if (tamanho1 != tamanho2){
		return 0; //Tamanhos Diferentes
	}

	for (int i = 0; i < tamanho1; i++){
		resultado[i] = array1[i] + array2[i];
	}

	*tamanhoResultado = tamanho1;
	return 1; //Concluido com Sucesso
}

int main(){

	int tamanho1;
	int tamanho2;

	printf("Digite o Tamanho do Primeiro Array: ");
	fflush(stdout);
	scanf("%d", &tamanho1);

	if (tamanho1 <= 0){
		printf("\nTamanho do Primeiro Array Invalido!!!\n");
		return 1;
	}

	int array1[tamanho1];

	printf("Digite os Elementos do Primeiro Array:\n");
	fflush(stdout);
	for (int i = 0; i < tamanho1; i++){
		scanf("%d", &array1[i]);
	}

	printf("\nDigite o Tamanho do Segundo Array: ");
	fflush(stdout);
	scanf("%d", &tamanho2);

	if (tamanho2 <= 0){
		printf("\nTamanho do Segundo Array Invalido!!!\n");
		return 1;
	}

	int array2[tamanho2];

	printf("Digite os Elementos do Segundo Array:\n");
	fflush(stdout);
	for (int i = 0; i < tamanho2; i++){
		scanf("%d", &array2[i]);
	}

	if (tamanho1 != tamanho2){
		printf("\nO Tamanho dos Arrays sao Diferentes!!!");
		return 1;
	}

	int tamanhoResultado;
	int resultado[tamanho1];

	if (somaArrays(array1, tamanho1, array2, tamanho2, resultado, &tamanhoResultado)){
		printf("\nResultado da Soma dos Arrays:\n");
		for (int i = 0; i < tamanhoResultado; i++){
			printf("%d ", resultado[i]);
		}
		printf("\n");
	}

	return 0;
}
