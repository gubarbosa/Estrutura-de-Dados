#include <stdio.h>
#include <stdlib.h>

/*Gustavo Barbosa Espindula*/

float CparaF(float c) /*função para converter C em F; */
{
	float f;          /*Declaração da variável*/
	
	f = c * (9 / 5) + 32;     /* Atribui a fórmula da conversão para a variável */
	
	return f;              /* Retorna a temperatura em F*/
}

int main(void)    /* Função main com void pois não retorna e nem possui parâmetros */
{
	float c, f;        /* Declara variável c e */
	printf("\nDigite a temperatura em C ");        /* Escreva na tela tal mensagem */
	scanf("%f", &c);                           /* Faz a leitura de dados e atribui a c */
	
	f = CparaF(c);                               /* chama a função de conversão e atribui a f */
	printf("A temperatura de %2f em C e %2f em F", c, f);           /*Escreve a temperatura em C e em F */
	
	return 0;          /* Encerra o programa */
}
