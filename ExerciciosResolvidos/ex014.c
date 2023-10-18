/*
 * ex014.c
 *
 *  Criado em: 18 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Preenche os Elementos de um array com um valor
void preencheArray(int *array, int tamanho, int valor){
	int *ptr = array;
	int *end = array + tamanho;

	while (ptr < end){
		*ptr = valor;
		ptr++;
	}
}

int main(){

	int tamanhoArray;
	int valor;

	printf("Digite o Tamanho do array: ");
	fflush(stdout);
	scanf("%d", &tamanhoArray);

	int array[tamanhoArray]; //Cria um array com o tamanho fornecido

	printf("Digite um Valor Inteiro para Preencher o Array: ");
	fflush(stdout);
	scanf("%d", &valor);

	preencheArray(array, tamanhoArray, valor);

	//Imprime o array apos o preenchimento
	printf("\nArray Preenchido com o Valor %d:\n", valor);
	for (int i = 0; i < tamanhoArray; i++){
		printf("%d ", array[i]);
	}

	printf("\n");

	return 0;
}
