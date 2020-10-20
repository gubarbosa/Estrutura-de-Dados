#include <stdio.h>
#include <stdlib.h>

/*Gustavo Barbosa Espindula*/

float CparaF(float c) /*fun��o para converter C em F; */
{
	float f;          /*Declara��o da vari�vel*/
	
	f = c * (9 / 5) + 32;     /* Atribui a f�rmula da convers�o para a vari�vel */
	
	return f;              /* Retorna a temperatura em F*/
}

int main(void)    /* Fun��o main com void pois n�o retorna e nem possui par�metros */
{
	float c, f;        /* Declara vari�vel c e */
	printf("\nDigite a temperatura em C ");        /* Escreva na tela tal mensagem */
	scanf("%f", &c);                           /* Faz a leitura de dados e atribui a c */
	
	f = CparaF(c);                               /* chama a fun��o de convers�o e atribui a f */
	printf("A temperatura de %2f em C e %2f em F", c, f);           /*Escreve a temperatura em C e em F */
	
	return 0;          /* Encerra o programa */
}
