/*
 * ex019.c
 *
 *  Criado em: 20 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Encontra Maior Valor e faz a contagem
void maiorContagem(int array[], int N, int *maior, int *contagem){

	*maior = array[0]; //Inicializa o maior Elemento com o Primeiro Valor do Array
	*contagem = 1;    //Inicializa a contagem com 1 para o Primeiro Elemento

	for (int i = 1; i < N; i++){
		if (array[i] > *maior){
			*maior = array[i]; //Atualiza o maior Elemento
			*contagem = 1;    //Reinicia a contagem para o novo maior Elemento
		} else if (array[i] == *maior){
			(*contagem)++;  //Incrementa a contagem se o Elemento for igual ao maior
		}
	}
}

int main(){

	int N;
	int maiorElemento;
	int contagem;

	printf("Digite o Tamanho do Array: ");
	fflush(stdout);
	scanf("%d", &N);

	if (N <= 0){
		printf("\nO Tamanho do Array deve ser Maior que Zero!!!\n");
		return 1;
	}

	int array[N];

	printf("Digite os Elementos do Array:\n");
	fflush(stdout);
	for (int i = 0; i < N; i++){
		scanf("%d", &array[i]);
	}

	maiorContagem(array, N, &maiorElemento, &contagem);

	printf("\nMaior Elemento: %d\n", maiorElemento);
	printf("Numero de Vezes que Ocorreu: %d\n", contagem);

	return 0;
}
