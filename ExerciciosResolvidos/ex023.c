/*
 * ex023.c
 *
 *  Criado em: 26 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Encontra o maior Elemento em um array
int encontraMaior(int *array, int N){
	int maior = array[0]; //Inicializa o maior com o primeiro elemento do array

	//Percorre o array a partir do segundo elemento
	for (int i = 1; i < N; i++){
		if (array[i] > maior){
			maior = array[i]; //Atualiza o maior se encontrar um valor maior
		}
	}

	return maior; //Retorna o maior elemento
}

int main(){

	int N;
	int k;

	printf("Digite o Tamanho do Array: ");
	fflush(stdout);
	scanf("%d", &N);

	if (N <= 0){
		printf("\nTamanho do Array Invalido!!!\n");
		return 1; //Encerra o programa se o tamanho for invalido
	}

	int array[N];

	printf("Digite os Elementos do Array:\n");
	fflush(stdout);
	for (int i = 0; i < N; i++){
		scanf("%d", &array[i]);
	}

	printf("\nDigite o Numero de Elementos por Linha: ");
	fflush(stdout);
	scanf("%d", &k);

	if (k <= 0){
		printf("\nNumero de Elementos por linha Invalido!!!\n");
		return 1; //Encerra o programa se o tamanho de k for invalido
	}

	int maior = encontraMaior(array, N);

	printf("\nArray com %d Elementos por linha:\n", k);
	for (int i = 0; i < N; i++){
		printf("%d ", array[i]);
		if ((i + 1) % k == 0 || i == N - 1){
			printf("\n"); //Quebra de linha
		}
	}

	printf("\nMaior Elemento: %d\n", maior);

	return 0;
}
