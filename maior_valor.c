#include <stdio.h>

//Gustavo Barbosa Espindula

int maiorValor(int * pa, int *pb) {     //  função para trocar o maior valor
	if (*pb > *pa) {                //if para verificar qual é o maior
		int a = *pb;					// se a condição estiver certa, atribui as variáveis para fazer a troca
		*pb = *pa;						
		*pa = a;
	}
}

int main(void) {                     //função main 
	int x = 4, y = 8;                  //declara as variáveis
	maiorValor(&x, &y);                //chama a função para trocar
	printf("x: %d    y: %d", x, y);         //printa na tela as variáveis
	
	return 0;
}
