#include <stdio.h>
#include <stdlib.h>


float retornarMaior(float numero1, float numero2, float numero3) /* fun��o para calcular o maior dos tr�s n�meros */
{
	float maior_valor;           /*Declara vari�vel do maior valor */
	
	if (numero1 > numero2 && numero1 > numero3) {           /* Condi��o para comparar o primeiro n�mero, se for True atribui maior_valor a numero1 */
		maior_valor = numero1;
	} 
	else if (numero2 > numero1 && numero2 > numero3) {     /* Condi��o para comparar o segundo n�mero, se for True atribui maior_valor a numero2 */
		maior_valor = numero2;
	} 
	else if (numero3 > numero1 && numero3 > numero2) {        /* Condi��o para comparar o terceiro n�mero, se for True atribui maior_valor a numero3 */
		maior_valor = numero3;
	}
	
	return maior_valor;                 /* Retorna o maior valor dentre os tr�s */
}


int main (void)          /* Fun��o main com void pois n�o retorna e n�o possui par�metros */
{
	float numero1;        /* Declara a vari�vel numero1 */
	printf("\n Digite um n�mero real:");        /* Escreve na tela */
	scanf("%f", &numero1);               /* Atribui a entrada de dados do usu�rio a numero1 */
	fflush(stdin);                 /* Limpa buffer do teclado */
	
	float numero2;                          
	printf("\n Digite um n�mero inteiro:");             /* Mesma l�gica.. */
	scanf("%f", &numero2);
	fflush(stdin);
	
	float numero3;
	printf("\n Digite mais um n�mero inteiro:");         /* Mesma l�gica */
	scanf("%f", &numero3);
	fflush(stdin);
	
	float maior_valor;            /* Declara a vari�vel de maior_valor */
	
	maior_valor = retornarMaior(numero1, numero2, numero3);           /* Atribui valor a maior_valor chamando a fun��o retornarMaior */
	
	printf("Maior valor: %f", maior_valor);              /* Escreva na tela qual � o maior valor */
	
	return 0;         /* Fim do programa */
}

