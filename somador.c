#include <stdio.h>

//Gustavo Barbosa Espindula

int soma(int *a, int *b) {               //fun��o para fazer a soma no A
	int resultado = *a + *b;			// armazenar a soma na vari�vel
	*a = resultado;						// colocando resultado no ponteiro
}

int main(void) {                     
	int a = 3, b = 5;                    //declara as vari�veis a e b
	soma(&a, &b);                        //chama a fun��o de soma e coloca o conte�do nos ponteiros
	printf("a: %d     b: %d", a, b);      //printa a troca na tela
	return 0;
}
