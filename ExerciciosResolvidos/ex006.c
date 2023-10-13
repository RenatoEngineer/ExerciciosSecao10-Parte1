/*
 * ex006.c
 *
 *  Criado em: 13 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Funcao para calcular a soma do dobro de dois valores e atualiza-los
int somaDobro(int *a, int *b){
	int resultado = (*a * 2) + (*b * 2);
	*a = *a * 2;
	*b = *b * 2;
	return resultado;
}

int main(){

	int valorA;
	int valorB;

	//Solicita ao Usuario que insira os valores
	printf("Digite o Valor de A: ");
	fflush(stdout);
	scanf("%d", &valorA);

	printf("Digite o Valor de B: ");
	fflush(stdout);
	scanf("%d", &valorB);

	//Chama a funcao para calcular a soma do dobro e atualizar os valores
	int resultado = somaDobro(&valorA, &valorB);

	//Exibe os Valores de A e B apos a atualizacao
	printf("\nValor de A apos a Atualizacao: %d\n", valorA);
	printf("Valor de B apos a Atualizacao: %d\n", valorB);

	//Exibe a soma do dobro dos valores originais
	printf("\nA Soma do Dobro de A e B: %d\n", resultado);

	return 0;
}
