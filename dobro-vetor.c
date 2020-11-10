#include <stdio.h>

//Gustavo Barbosa Espindula

int main(void) {
	int v[5];
	
	int i;
	
	for (i = 0; i < 5; i++) {
		
		printf("Digite o %d numero", i+1);
		scanf("%d", &v[i]);
	}
	
	for (i = 0; i < 5; i++) {
		
		int dobro = v[i] * 2;
		
		printf("Numero: %d |    Dobro: %d \n", v[i] , dobro);
	}
	return 0;
}
