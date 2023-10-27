/*
 * ex025.c
 *
 *  Criado em: 27 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Le duas Notas Validas
void lerNotas(float *nota1, float *nota2){
	do {
		printf("Digite a Primeira Nota (Entre 0 e 10): ");
		fflush(stdout);
		scanf("%f", nota1);
	} while (*nota1 < 0 || *nota1 > 10); //Continua pedindo a nota ate que seja valida

	do {
		printf("Digite a Segunda Nota (Entre 0 e 10): ");
		fflush(stdout);
		scanf("%f", nota2);
	} while (*nota2 < 0 || *nota2 > 10); //Continua pedindo a nota ate que seja valida
}

//Calcula a Media Simples e Media Ponderada
void calculaMedias(float nota1, float nota2, float *mediaSimples, float *mediaPonderada){
	*mediaSimples = (nota1 + nota2) / 2; //Calcula a Media Simples
	*mediaPonderada = (nota1 + nota2 * 2) / 3; //Calcula a Media Ponderada
}

int main(){

	float n1;
	float n2;
	float mediaSimples;
	float mediaPonderada;

	lerNotas(&n1, &n2); //Chama a funcao para ler as notas e armazena nos ponteiros
	calculaMedias(n1, n2, &mediaSimples, &mediaPonderada); //Chama a funcao para calcular as medias

	printf("\nPrimeira Nota: %.2f", n1);
	printf("\nSegunda Nota: %.2f\n", n2);

	printf("\nMedia Simples: %.2f\n", mediaSimples);
	printf("Media Ponderada: %.2f\n", mediaPonderada);

	return 0;
}
