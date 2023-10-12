/*
 * ex003.c
 *
 *  Criado em: 12 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

int main(){

	int variavel1;
	int variavel2;

	//Solicita os Valores das Variaveis
	printf("Digite um Valor para a Primeira Variavel: ");
	fflush(stdout);
	scanf("%d", &variavel1);

	printf("Digite um Valor para a Segunda Variavel: ");
	fflush(stdout);
	scanf("%d", &variavel2);

	//Obtem os Enderecos das Variavaies
	int *enderecoVariavel1 = &variavel1;
	int *enderecoVariavel2 = &variavel2;

	//Compara os Enderecos e Imprime
	if (enderecoVariavel1 > enderecoVariavel2){
		printf("\nO Endereco da Variavel 1 (%p) e maior!\nConteudo da Variavel 1: %d !!!\n", enderecoVariavel1, variavel1);
	} else {
		if (enderecoVariavel1 < enderecoVariavel2){
			printf("\nO Endereco da Variavel 2 (%p) e maior!\nConteudo da Variavel 2: %d !!!\n", enderecoVariavel2, variavel2);
		} else {
			printf("\nOs Enderecos da Variavel 1 e Variavel 2 sao iguais (%p) !!!\n", enderecoVariavel1);
		}
	}

	return 0;
}
