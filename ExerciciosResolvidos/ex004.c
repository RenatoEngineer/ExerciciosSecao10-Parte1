/*
 * ex004.c
 *
 *  Criado em: 13 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

	//Funcao para trocar o conteudo de duas variaveis
	void trocaConteudo(int *a, int *b){
		int temp = *a;
		*a = *b;
		*b = temp;
	}

int main(){

	int valorA;
	int valorB;

	//Solicita que o Usuario digite os Valores das Variaveis
	printf("Digite o Valor de A: ");
	fflush(stdout);
	scanf("%d", &valorA);

	printf("Digite o Valor de B: ");
	fflush(stdout);
	scanf("%d", &valorB);

	//Chama a funcao para trocar o conteudo das variaveis
	trocaConteudo(&valorA, &valorB);

	//Exibe os valores apos a troca
	printf("\nApos a troca, o valor de A e: %d\n", valorA);
	printf("Apos a troca, o valor de B e: %d\n", valorB);

	return 0;
}
