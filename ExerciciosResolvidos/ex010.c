/*
 * ex010.c
 *
 *  Criado em: 16 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

int main(){

	int array[5];
	int *ponteiro = array; //Inicializa o ponteiro para o inicio do array

	printf("Digite 5 Valores Inteiros:\n");
	for (int i = 0; i < 5; i++){
		fflush(stdout);
		scanf("%d", ponteiro + i); //Le valores diretamente na posicao usando aritmerica de ponteiros
	}

	//Imprime o Dobro de Cada valor usando aritmetica de ponteiros
	printf("\nO Dobro de Cada Valor e:\n");
	for (int i = 0; i < 5; i++){
		printf("%d ", *(ponteiro + i) * 2); //Le e imprime o dobro de cada Valor
	}

	return 0;
}
