/*
 * ex002.c
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

	//Obtem os Enderecos das Variavaies
	int *enderecoVariavel1 = &variavel1;
	int *enderecoVariavel2 = &variavel2;

	//Compara os Enderecos e Imprime
	if (enderecoVariavel1 > enderecoVariavel2){
		printf("O Endereco da Variavel 1 (%p) e maior do que o Endereco da Variavel 2 (%p)!!!\n", enderecoVariavel1, enderecoVariavel2);
	} else {
		if (enderecoVariavel1 < enderecoVariavel2){
			printf("O Endereco da Variavel 2 (%p) e maior do que o Endereco da Variavel 1 (%p)!!!\n", enderecoVariavel2, enderecoVariavel1);
		} else {
			printf("Os Enderecos da Variavel 1 e Variavel 2 sao iguais (%p)!!!\n", enderecoVariavel1);
		}
	}

	return 0;
}
