#include <stdio.h>
#include <stdlib.h>


float retornarMaior(float numero1, float numero2, float numero3) /* função para calcular o maior dos três números */
{
	float maior_valor;           /*Declara variável do maior valor */
	
	if (numero1 > numero2 && numero1 > numero3) {           /* Condição para comparar o primeiro número, se for True atribui maior_valor a numero1 */
		maior_valor = numero1;
	} 
	else if (numero2 > numero1 && numero2 > numero3) {     /* Condição para comparar o segundo número, se for True atribui maior_valor a numero2 */
		maior_valor = numero2;
	} 
	else if (numero3 > numero1 && numero3 > numero2) {        /* Condição para comparar o terceiro número, se for True atribui maior_valor a numero3 */
		maior_valor = numero3;
	}
	
	return maior_valor;                 /* Retorna o maior valor dentre os três */
}


int main (void)          /* Função main com void pois não retorna e não possui parâmetros */
{
	float numero1;        /* Declara a variável numero1 */
	printf("\n Digite um número real:");        /* Escreve na tela */
	scanf("%f", &numero1);               /* Atribui a entrada de dados do usuário a numero1 */
	fflush(stdin);                 /* Limpa buffer do teclado */
	
	float numero2;                          
	printf("\n Digite um número inteiro:");             /* Mesma lógica.. */
	scanf("%f", &numero2);
	fflush(stdin);
	
	float numero3;
	printf("\n Digite mais um número inteiro:");         /* Mesma lógica */
	scanf("%f", &numero3);
	fflush(stdin);
	
	float maior_valor;            /* Declara a variável de maior_valor */
	
	maior_valor = retornarMaior(numero1, numero2, numero3);           /* Atribui valor a maior_valor chamando a função retornarMaior */
	
	printf("Maior valor: %f", maior_valor);              /* Escreva na tela qual é o maior valor */
	
	return 0;         /* Fim do programa */
}

