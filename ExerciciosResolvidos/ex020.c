/*
 * ex020.c
 *
 *  Criado em: 20 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Conta Numeros Negativos
int negativos(float *vet, int N){
	int contadorNegativos = 0;    //Inicializa o contador de Numeros Negativos

	for (int i = 0; i < N; i++){
		if (vet[i] < 0){
			contadorNegativos++;   //Incrementa o Contador se o Numero for Negativo
		}
	}

	return contadorNegativos;   //Retorna a Contagem de Numeros Negativos
}

int main(){

	int N;
	int contador;

	printf("Digite o Tamanho do Array: ");
	fflush(stdout);
	scanf("%d", &N);

	if (N <= 0){
		printf("\nO Tamanho do Array deve ser Maior que Zero!!!\n");
		return 1;
	}

	float array[N];

	printf("Digite os Elementos do Array:\n");
	fflush(stdout);
	for (int i = 0; i < N; i++){
		scanf("%f", &array[i]);
	}

	contador = negativos(array, N);   //Chama a Funcao para contar Numeros Negativos

	printf("\nNumero de Negativos no Array: %d\n", contador);

	return 0;
}
