#include <stdio.h>
#include <stdlib.h>
 
void menu();
float soma(float x, float y)
{
 return x+y;
}
 
float subtracao(float x, float y)
{
 return (x-y);
}
 
float produto(float x, float y)
{
 return x*y;
}
 
float divisao(float x, float y)
{
 return (x/y);
}
 
float quadrado(float x)
{
 return (x*x);
}
 
float cubo(float x)
{
 return (x*x*x);
}
 
int restoDivisao(int x, int y)
{
 return (x % y);
}
 
int par(int x)
{
 if(x%2 == 0)
  return 1;
 else
  return 0;
}
 
int multiplo(int x, int y)
{
 if(x%y == 0)
  return 1;
 else
  return 0;
}
 
int primo(int x)
{
 int count;
 if(x==1)
  return 1;
 else
 {
  for(count=2 ; count <= x/2 ; count++)
   if(x%count == 0) //x é múltiplo de 'count', então não é primo
    return 0;
 
  return 1;
 }
}
 
int* divisores(int x)
{
 int *divisores,
  *temp,
  count,
  divisor=0;
 
 // Não sabemos quantos divisores x tem, mas no máximo tem x (se for 2)
 temp = (int *) malloc(x*sizeof(int));
 
 //zerando todos os elementos de temp com 0
 for(count=0 ; count < x ; count++)
  temp[count]=0;
 
 //Checando os divisores de 'x' e colocando no vetor temp
 for(count=1 ; count <= x ; count++)
  if(x % count == 0) //'count' é divisor
  {
   temp[divisor] = count;
   divisor++;
  }
 
 // Agora vamos colocar os divisores do vetor 'temp' em 'divisores' e retorná-lo
 divisores = (int*) malloc(  divisor*(sizeof(int)));
 for(count=0 ; count < divisor ; count++)
  divisores[count] = temp[count];
 
 free(temp);
 return divisores;
}
 
 
void executa(int opcao)
{
 int continuar=1,
  x,
  y,
  *div;
 float num1,
    num2;
 
 
 switch( opcao )
 {
  case 1:
    printf("\n\n###Soma de dois numeros\n");
    printf("Numero 1: "); scanf("%f",&num1);
    printf("Numero 2: "); scanf("%f",&num2);
    printf("%.2f + %.2f = %.2f\n\n",num1, num2, soma(num1,num2) );
    break;
 
  case 2:
    printf("\n\n### Subtracao de dois numeros\n");
    printf("Numero 1: "); scanf("%f",&num1);
    printf("Numero 2: "); scanf("%f",&num2);
    printf("%.2f - %.2f = %.2f\n\n",num1, num2,subtracao(num1,num2) );
    break;
  case 3:
    printf("\n\n### Produto de dois numeros\n");
    printf("Numero 1: "); scanf("%f",&num1);
    printf("Numero 2: "); scanf("%f",&num2);
    printf("%.2f * %.2f = %.2f\n\n",num1, num2,produto(num1,num2) );
    break;
 
  case 4:
    printf("\n\n### Divisao de dois numeros\n");
    printf("Numero 1: "); scanf("%f",&num1);
    printf("Numero 2: "); scanf("%f",&num2);
    if(num2 == 0)
     printf("Operacao invalida. Denominador nao pode ser 0\n\n");
    else
     printf("%.2f / %.2f = %.2f\n\n",num1, num2, divisao(num1,num2) );
    break;
 
  case 5:
    printf("\n\n### Resto da divisao de dois numeros\n");
    printf("Numero 1: "); scanf("%d",&x);
    printf("Numero 2: "); scanf("%d",&y);
    printf("%d %% %d == %d\n\n",x,y,restoDivisao(x,y) );
    break;
 
  case 6:
    printf("\n\n### Quadrado de um numero\n");
    printf("Numero: "); scanf("%f",&num1);
    printf("%.2f * %.2f = %.2f\n\n",num1, num1, quadrado(num1) );
    break;
 
  case 7:
    printf("\n\n### Cubo de um numero\n");
    printf("Numero: "); scanf("%f",&num1);
    printf("%.2f * %.2f * %.2f= %.2f\n\n",num1, num1, num1, cubo(num1) );
    break;
 
  case 8:
    printf("\n\n### Paridade de um numero\n");
    printf("Numero: "); scanf("%d",&x);
    if(par(x))
     printf("%d eh par\n\n", x);
    else
     printf("%d nao eh par\n\n", x);
    break;
 
  case 9:
    printf("\n\n### Multiplicidade de numeros\n");
    printf("Numero 1: "); scanf("%d",&x);
    printf("Numero 2: "); scanf("%d",&y);
    if(multiplo(x, y))
     printf("%d eh multiplo de %d\n\n", x, y);
    else
     printf("%d nao eh multiplo de %d\n\n", x, y);
    break;
 
  case 10:
    printf("\n\n### Saber se numero eh primo\n");
    printf("Numero: "); scanf("%d",&x);
    if(primo(x))
     printf("%d eh primo\n\n", x);
    else
     printf("%d nao eh primo\n\n", x);
    break;
 
  case 11:
    printf("\n\n### Divisores de um numero\n");
    printf("Numero: "); scanf("%d",&x);
    printf("Divisores de %d: ", x);
 
    //Exibindo o vetore de numeros
    div=divisores(x);
    for(y=0 ; div[y-1] != x; y++)
     printf("%3d ",div[y]);
    printf("\n\n");
    break;
  default:
    printf("Operacao nao identificada\n\n");
 }
 
 printf("Digite 0 para sair, ou outro numero para continuar: ");
 scanf("%d", &continuar);
 
 if(continuar)
  menu();
 else
  printf("Saindo do programa...\n");
}
 
 
 
 
void menu()
{
 int opc;
 printf("\n\n### Biblioteca Matematica do C Progressivo ### \n");
 printf("Escolha sua opcap: \n");
 printf("0. Sair\n");
 printf("1. Somar dois numeros\n");
 printf("2. Subtrair dois numeros\n");
 printf("3. Multiplicar dois numeros\n");
 printf("4. Dividir dois numeros\n");
 printf("5. Resto da divisao de dois numeros\n");
 printf("6. Quadrado de um numero\n");
 printf("7. Cubo de um numero\n");
 printf("8. Saber se um numero eh par\n");
 printf("9. Saber se um numero eh multiplo de outro\n");
 printf("10. Saber se numero eh primo\n");
 printf("11. Divisores de um numero\n");
 
 do
 {
  printf("\nEscolha sua opcao: ");
  scanf("%d", &opc);
 }while(opc<0 || opc > 11);
 
 if(opc)
  executa(opc);
 else
  printf("Saindo do programa...\n");
 
}
