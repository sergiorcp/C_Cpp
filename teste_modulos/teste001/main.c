#include <stdio.h>
#include <stdlib.h>
/*
 * Apostila C Progressivo: www.cprogressivo.net
 * Programa com funções matemáticas
 * 
 	Vamos, portanto, compilar nossos dois códigos fonte: 'main.c' e 'funcoes.c'
 	gcc -o principal main.c auxiliar/funcoes.c

 	Fazemos a compilação de ambos os códigos fonte, 
 	mas esses arquivos simplesmente não sabem da existência um do outro.

 	Embora o arquivo 'main.c' tenha a chamada para a função 'menu()', 
 	que chama as funções que são implementadas no módulo 'funcoes.c', 
 	o compilador exige apenas que essas funções sejam declaradas no 'main.c',
 	e não necessariamente implementada lá.

 	Ou seja, fizemos os cabeçalhos das funções no 'main.c' apenas para dizer 
 	ao compilador 'Hey, essas funções aqui existem. 
 	Elas recebem argumentos de tais tipos e retornam tais valores, ok? 
 	É apenas isso que você precisa saber'.

 */
 
float soma(float x, float y);
float subtracao(float x, float y);
float produto(float x, float y);
float divisao(float x, float y);
float quadrado(float x);
float cubo(float x);
int restoDivisao(int x, int y);
int par(int x);
int multiplo(int x, int y);
int primo(int x);
int* divisores(int x);
void menu();
void executa(int opcap);
 
int main(void)
{
 menu();
 
 return 0;
}