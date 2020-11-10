#include <stdio.h>

//Gustavo Barbosa Espindula

int inteiros(int *a, int *b, int*c) {        //fun��o para fazer a ordem dos inteiros
	int troca;
	
	if (*c < *b) {                        // condi��o para verificar se � menor
		troca = *c;
		*c = *b;                         //faz  a troca usando a variavel troca
		*b = troca;
	}
	
	if (*a > *b) {						// condi��o para verificar se � maior
		troca = *b;
		*b = *a;
		*a = troca;						//faz  a troca usando a variavel troca
	}
	
	if (*b > *c) {						
		troca = *c;						// condi��o para verificar se � maior
		*c = *b;
		*b = troca;						//faz  a troca usando a variavel troca
	}
	
	if (*a == *b && *a == *c) {			//condi��o que verifica igualdade
		return 1;
	}
	else
	{									// se n�o, retorna 0
		return 0;
	}
}

int main(void) 							
{
	int x = 4, y = 2, z =3;					//declara vari�veis x,y,z
	printf("Ordenar: %d \n", inteiros(&x, &y, &z));				//printa o retorno da fun��o inteiros
	printf("x = %d, y=%d, z=%d", x, y, z);					// printa as vari�veis ordenadas
	return 0;									//encerra o programa
}
