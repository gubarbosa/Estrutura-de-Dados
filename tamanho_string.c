#include <stdio.h>
#include <stdlib.h>

/* 
	Gustavo Barbosa Espindula
*/

void tamanho(char *str, int *strsize)    /* Calcula o tamanho da string */
{
	int i = 0;
	char final = str[i];
	
	while (final != 0)
	{
		final = str[i];
		i++;
	}
	
	*strsize = i-1;
}

int main(void)
{
	char str[] = "string";
	int* strsize = (int*) malloc(sizeof(int)); //Faz a alocação dinâmica
	if (strsize == NULL) // If para verificar se foi alocado
	{
		printf("Memoria Insuficiente");
	}
	
	tamanho(str, strsize);
	printf("Tamanho da %s = %d", str, *strsize);
	
	free(strsize); /* Liberar memória */
	
	return 0;   	/* Fim do programa */
}
