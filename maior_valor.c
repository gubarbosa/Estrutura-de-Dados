#include <stdio.h>

//Gustavo Barbosa Espindula

int maiorValor(int * pa, int *pb) {     //  fun��o para trocar o maior valor
	if (*pb > *pa) {                //if para verificar qual � o maior
		int a = *pb;					// se a condi��o estiver certa, atribui as vari�veis para fazer a troca
		*pb = *pa;						
		*pa = a;
	}
}

int main(void) {                     //fun��o main 
	int x = 4, y = 8;                  //declara as vari�veis
	maiorValor(&x, &y);                //chama a fun��o para trocar
	printf("x: %d    y: %d", x, y);         //printa na tela as vari�veis
	
	return 0;
}
