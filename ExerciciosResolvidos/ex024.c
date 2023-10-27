/*
 * ex024.c
 *
 *  Criado em: 27 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

void minMax(int *array, int tamanho, int *min, int *max){
	if (tamanho == 0){ //Se o array estiver vazio, definimos min e max como 0
		*min = 0;
		*max = 0;
		return; //Termina a funcao sem retornar nada
	}

	*min = *max = array[0]; //Inicializa min e max com o primeiro elemento do array

	for (int i = 1; i < tamanho; i++){
		if (array[i] < *min){
			*min = array[i]; //Atualiza o valor minimo se encontrar um valor menor
		} else if (array[i] > *max){
			*max = array[i]; //Atualiza o valor maximo se encontrar um valor maior
		}
	}
}

int main(){

	int tamanho;
	int min;
	int max;

	printf("Digite o Tamanho do Array: ");
	fflush(stdout);
	scanf("%d", &tamanho);

	if (tamanho <= 0){
		printf("Tamanho Invalido!!!");
		return 1; //Encerra o programa com Erro!
	}

	int array[tamanho];

	printf("Digite os Elementos do Array:\n");
	fflush(stdout);
	for (int i = 0; i < tamanho; i++){
		scanf("%d", &array[i]);
	}

	minMax(array, tamanho, &min, &max);

	printf("\nValor Minimo: %d\n", min);
	printf("Valor Maximo: %d\n", max);

	return 0;
}
