/*
 * ex005.c
 *
 *  Criado em: 13 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Funcao para encontrar o maior e o menor valor entre dois numeros
void encontraMaiorMenor(int a, int b, int *maior, int *menor){
	if (a > b){
		*maior = a;
		*menor = b;
	} else {
		*maior = b;
		*menor = a;
	}
}

int main(){

	int valor1;
	int valor2;
	int maior;
	int menor;

	//Solicita ao Usuario que digite os valores das Variaveis
	printf("Digite o Primeiro Valor: ");
	fflush(stdout);
	scanf("%d", &valor1);

	printf("Digite o Segundo Valor: ");
	fflush(stdout);
	scanf("%d", &valor2);

	//Chama a funcao para encontrar o maior e o menor valor
	encontraMaiorMenor(valor1, valor2, &maior, &menor);

	//Exibe os valores do maior e do menor
	printf("\nMaior valor: %d\n", maior);
	printf("Menor valor: %d\n", menor);

	return 0;
}
