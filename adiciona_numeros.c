/* 
	Programa para adicionar números
 */

#include <stdio.h>

int main(){


	int num1;
	int num2;
	int num3;

	printf("%s", "Informe primeiro número :");
	scanf("%d", &num1);

	printf("%s", "Informe segundo número :");
	scanf("%d", &num2);

	num3 = num1 + num2;

	printf("%s%d","A soma dos números é :", num3);

	printf("\n");

	return 0;
}