/*
 * ex015.c
 *
 *  Criado em: 18 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Imprime um Array usando Aritmetica de Ponteiros
void imprimeArray(int *array, int tamanho){
	int *ptr = array;
	int *end = array + tamanho;

	while (ptr < end){
		printf("%d ", *ptr);
		ptr++;
	}

	printf("\n");
}

int main(){

	int tamanhoArray;

	printf("Digite o Tamanho do Array: ");
	fflush(stdout);
	scanf("%d", &tamanhoArray);

	int array[tamanhoArray]; //Cria um array com o tamanho fornecido

	printf("Digite os elementos do array:\n");
	fflush(stdout);
	for (int i = 0; i < tamanhoArray; i++){
		scanf("%d", &array[i]);
	}

	//Chama a funcao para imprimir o array
	printf("\nArray fornecido pelo Usuario: ");
	imprimeArray(array, tamanhoArray);

	return 0;
}
