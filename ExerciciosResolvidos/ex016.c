/*
 * ex016.c
 *
 *  Criado em: 19 de out de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao10-Parte1
 */

#include <stdio.h>

int main() {
    int A;
    int *B = &A;
    int **C = &B;
    int ***D = &C;

    printf("Digite um valor inteiro: ");
    fflush(stdout);
    scanf("%d", &A);

    printf("\nO Dobro do valor: %d\n", (*B * 2));       // Calcula o Dobro em B
    printf("O Triplo do valor: %d\n", (**C * 3));      // Calcula o Triplo em C
    printf("O Quadruplo do valor: %d\n", (***D * 4)); // Calcula o Quadruplo em D

    return 0;
}
