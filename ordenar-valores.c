#include <stdio.h>

//Gustavo Barbosa Espindula

int inteiros(int *a, int *b, int*c) {        //função para fazer a ordem dos inteiros
	int troca;
	
	if (*c < *b) {                        // condição para verificar se é menor
		troca = *c;
		*c = *b;                         //faz  a troca usando a variavel troca
		*b = troca;
	}
	
	if (*a > *b) {						// condição para verificar se é maior
		troca = *b;
		*b = *a;
		*a = troca;						//faz  a troca usando a variavel troca
	}
	
	if (*b > *c) {						
		troca = *c;						// condição para verificar se é maior
		*c = *b;
		*b = troca;						//faz  a troca usando a variavel troca
	}
	
	if (*a == *b && *a == *c) {			//condição que verifica igualdade
		return 1;
	}
	else
	{									// se não, retorna 0
		return 0;
	}
}

int main(void) 							
{
	int x = 4, y = 2, z =3;					//declara variáveis x,y,z
	printf("Ordenar: %d \n", inteiros(&x, &y, &z));				//printa o retorno da função inteiros
	printf("x = %d, y=%d, z=%d", x, y, z);					// printa as variáveis ordenadas
	return 0;									//encerra o programa
}
