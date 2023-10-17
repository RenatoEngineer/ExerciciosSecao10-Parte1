/*
 * ex013.c
 *
 *  Criado em: 17 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

//Funcao para verificar se a segunda string ocorre dentro da primeira
int ocorrenciaString(const char *string1, const char *string2){ //Usado const para garantir que a String nao sera alterada
	const char *ptr1 = string1;
	const char *ptr2 = string2;

	while (*ptr1 != '\0'){
		const char *temp1 = ptr1;
		const char *temp2 = ptr2;

		while (*temp1 == *temp2 && *temp2 != '\0'){
			temp1++;
			temp2++;
		}

		if (*temp2 == '\0'){
			return 1; //A segunda string ocorre na primeira
		}

		ptr1++;
	}

	return 0; //A segunda string nao ocorre na primeira
}

int main(){

	char string1[100];
	char string2[100];

	printf("Digite a Primeira String: ");
	fflush(stdout);
	scanf("%s", string1);

	printf("Digite a Segunda String: ");
	fflush(stdout);
	scanf("%s", string2);

	if (ocorrenciaString(string1, string2)){
		printf("\nA Segunda String ocorre na Primeira!!!\n");
	} else {
		printf("\nA Segunda String nao ocorre na Primeira!!!\n");
	}

	return 0;
}
