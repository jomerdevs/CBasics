
#include<stdio.h>
#include<locale.h>

//EN: determine if the number entered by the user is a multiple of 5
//ES: determinar si el n�mero ingresado por el usuario es un n�mero multiplo de 5

int main() {

	setlocale(LC_ALL,"spanish");

	int num = 0;

	printf("Ingresa un n�mero: ");
	scanf("%d",&num);

	if (num % 5 == 0) {
		printf("El n�mero es multiplo de 5\n");
	}
	else {
		printf("El n�mero no es multiplo de 5\n");
	}

	return 0;
}