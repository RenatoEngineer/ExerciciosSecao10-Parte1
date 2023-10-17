/*
 * ex012.c
 *
 *  Criado em: 17 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Funcao para ordenar e verificar os valores

int ordenaValores(int *a, int *b, int *c){
	int temp;
	int iguais = 0;

	if (*a > *b){
		temp = *a;
		*a = *b;
		*b = temp;
	}

	if (*b > *c){
		temp = *b;
		*b = *c;
		*c = temp;
	}

	if (*a > *b){
		temp = *a;
		*a = *b;
		*b = temp;
	}

	if (*a == *b && *b == *c){
		iguais = 1;
	}

	return iguais;
}

int main(){

	int valor1;
	int valor2;
	int valor3;

	printf("Digite o Primeiro Valor inteiro: ");
	fflush(stdout);
	scanf("%d", &valor1);

	printf("Digite o Segundo Valor inteiro: ");
	fflush(stdout);
	scanf("%d", &valor2);

	printf("Digite o Terceiro Valor inteiro: ");
	fflush(stdout);
	scanf("%d", &valor3);

	int iguais = ordenaValores(&valor1, &valor2, &valor3);

	//Imprime Valores Ordenados
	printf("\nValores ordenados: %d, %d, %d\n", valor1, valor2, valor3);

	//Verifica se os valores sao iguais
	if (iguais){
		printf("\nOs Valores sao Iguais!!!\n");
	} else {
		printf("\nOs Valores sao Diferentes!!!");
	}

	return 0;
}
