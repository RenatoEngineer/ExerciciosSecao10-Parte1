/*
 * ex007.c
 *
 *  Criado em: 14 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Calcula a Soma de A e B e Armazena o Resultado em A
void calculaSoma(int *a, int b){
	*a = *a + b;
}

int main(){

	int valorA;
	int valorB;

	printf("Digite o Valor de A: ");
	fflush(stdout);
	scanf("%d", &valorA);

	printf("Digite o Valor de B: ");
	fflush(stdout);
	scanf("%d", &valorB);

	printf("\nValor de A: %d\n", valorA);

	//Chama a Funcao para calcular a soma e atualizar o valor de A
	calculaSoma(&valorA, valorB);

	//Imprime valores Atualizados
	printf("Valor de B: %d\n", valorB);
	printf("\nValor de A apos a Soma: %d\n", valorA);

	return 0;
}
