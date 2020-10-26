#include <stdio.h>

//Gustavo Barbosa Espindula
int main(void)
{
	int a=7;
	int b=5;
	int c;
	int *p1 = &a;
	int *p2 = &b;
	c = *p1;
	a = *p2;
	b = c;
	printf("O valor de a = %d e o valor de b = %d", a, b);
	return 0;
}
