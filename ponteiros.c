#include<stdio.h>

//Gustavo Barbosa Espindula

int main(void)
{
	int inteiro = 2;                          // Declara inteiro com valor 2
	float real = 3.0;                         // Declara um float com valor 3.0;
	char caracter = 'g';                      // Declara um char como 'g'
	printf("Valor antes dos ponteiros: Inteiro: %d Float: %f Char: %c", inteiro, real, caracter);                     //Print das vari�veis antes dos ponteiros
	int *pi = &inteiro;                      // Ponteiro que aponta para a vari�vel inteiro
	float *pf = &real;						// Ponteiro que aponta para a vari�vel real
	char *pc = &caracter;					// Ponteiro que aponta para a vari�vel caracter
	*pi = 8;								// pi recebe 8
	*pf = 5.0;								// pf recebe 5.0
	*pc = 'a';								// pc recebe 'a'	
	printf("\nValor pos ponteiros: Inteiro: %d Float: %f Char: %c", inteiro, real, caracter);     // Print das vari�veis p�s ponteiros
	return 0;								// Desempilhamento
}
