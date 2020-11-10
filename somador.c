#include <stdio.h>

//Gustavo Barbosa Espindula

int soma(int *a, int *b) {               //função para fazer a soma no A
	int resultado = *a + *b;			// armazenar a soma na variável
	*a = resultado;						// colocando resultado no ponteiro
}

int main(void) {                     
	int a = 3, b = 5;                    //declara as variáveis a e b
	soma(&a, &b);                        //chama a função de soma e coloca o conteúdo nos ponteiros
	printf("a: %d     b: %d", a, b);      //printa a troca na tela
	return 0;
}
