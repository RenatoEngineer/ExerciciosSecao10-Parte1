/*
 * ex001.c
 *
 *  Criado em: 12 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

int main(){

	//Declaracao de Variaveis

	int inteiro = 42;
	float real = 3.14;
	char caractere = 'A';

	//Declaracao de Ponteiros
	int *ponteiroInt;
	float *ponteiroReal;
	char *ponteiroCaractere;

	//Associacao das Variaveis aos ponteiros
	ponteiroInt = &inteiro;
	ponteiroReal = &real;
	ponteiroCaractere = &caractere;

	//Imprime os valores iniciais das variaveis
	printf(".:: Valores Iniciais das Variaveis ::.\n\n");
	printf("Inteiro: %d\n", inteiro);
	printf("Real: %.2f\n", real);
	printf("Caractere: %c\n", caractere);

	//Modifica os Valores usando os Ponteiros
	*ponteiroInt = 99;
	*ponteiroReal = 4.56;
	*ponteiroCaractere = 'B';

	//Imprime os Valores apos a modificacao
	printf("\n.:: Valores apos a Modificacao ::.\n\n");
	printf("Inteiro: %d\n", inteiro);
	printf("Real: %.2f\n", real);
	printf("Caractere: %c\n", caractere);

	return 0;
}
