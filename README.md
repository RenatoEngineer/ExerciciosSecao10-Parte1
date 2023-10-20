# .:: Exercicios Seção 10 - Parte 1 ::.

#### 1- Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando os ponteiros. Imprima os valores das variáveis antes e após a modificação.

[Resposta](./ExerciciosResolvidos/ex001.c)

#### 2- Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.

[Resposta](./ExerciciosResolvidos/ex002.c)

#### 3- Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.

[Resposta](./ExerciciosResolvidos/ex003.c)

#### 4- Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A.

[Resposta](./ExerciciosResolvidos/ex004.c)

#### 5- Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável. Escreva o conteúdo das 2 variáveis na tela.

[Resposta](./ExerciciosResolvidos/ex005.c)

#### 6- Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que retorne a soma do dobro dos dois números lidos. A função deverá armazenar o dobro de A na própria variável A e o dobro de B na própria variável B.

[Resposta](./ExerciciosResolvidos/ex006.c)

#### 7- Crie um programa que contenha uma função que permita passar por parâmetro dois números inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro parâmetro. Imprima os valores de A e B na função principal.

[Resposta](./ExerciciosResolvidos/ex007.c)

#### 8- Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço de cada posição desse array.

[Resposta](./ExerciciosResolvidos/ex008.c)

#### 9- Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas. Imprima o endereço de cada posição dessa matriz.

[Resposta](./ExerciciosResolvidos/ex009.c)

#### 10- Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

[Resposta](./ExerciciosResolvidos/ex010.c)

#### 11- Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.

[Resposta](./ExerciciosResolvidos/ex011.c)

#### 12- Faça um programa que leia três valores inteiros e chame uma função que receba estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variável, o segundo menor valor na variável do meio, e o maior valor na última variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem valores diferentes. Exibir os valores ordenados na tela.

[Resposta](./ExerciciosResolvidos/ex012.c)

#### 13- Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.

[Resposta](./ExerciciosResolvidos/ex013.c)

#### 14- Crie uma função que receba dois parâmetros: um array e um valor do mesmo tipo do array. A função deverá preencher os elementos de array com esse valor. Não utilize índices para percorrer o array, apenas aritmética de ponteiros.

[Resposta](./ExerciciosResolvidos/ex014.c)

#### 15- Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para percorrer o array, apenas aritmética de ponteiros.

[Resposta](./ExerciciosResolvidos/ex015.c)

#### 16- Considere a seguinte declaração: int A, *B, **C, ***D; Escreva um programa que leia a variável e calcule e exiba o dobro, o triplo e o quadruplo desse valor utilizando apenas os ponteiros B, C e D. O ponteiro B deve ser usada para calcular o dobro, C o triplo e D o quadruplo.

[Resposta](./ExerciciosResolvidos/ex016.c)

#### 17- Escreva uma função que dado um número real passado como parâmetro, retorne a parte inteira e a parte fracionária deste número. Escreva um programa que chama esta função. Protótipo:
<strong>void frac (float num, int* inteiro, float* frac);</strong>

[Resposta](./ExerciciosResolvidos/ex017.c)

#### 18- Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio R. Essa função deve obedecer ao protótipo:
<p><strong><em>void calc_esfera (float R, float *area, float *volume)</em></strong></p>
<p><strong>A área da superfície e o volume são dados, respectivamente, por:</strong></p>
<p><strong>A = 4 * p * R²</strong><br>
<strong>V = 4/3 * p * R³</strong></p>

[Resposta](./ExerciciosResolvidos/ex018.c)

#### 19- Escreva uma função que aceita como parâmetro um array de inteiros com N valores, e determina o maior elemento do array e o número de vezes que este elemento ocorreu no array. Por exemplo, para um array com os seguintes elementos: 5, 2, 15, 3, 7, 15, 8, 6, 15, a função deve retorna para o programa que a chamou o valor 15 e o número 3 (indicando que o número 15 ocorreu 3 vezes). A função deve ser do tipo void.

[Resposta](./ExerciciosResolvidos/ex019.c)

#### 20- Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne quantos números negativos há nesse array. Essa função deve obedecer ao protótipo:
<p><strong><em>int negativos (float *vet, int N);</em></strong></p>

[Resposta](./ExerciciosResolvidos/ex020.c)

