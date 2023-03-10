
#include<stdio.h>
#include<locale.h>

//EN: determine if the number entered by the user is a multiple of 5
//ES: determinar si el número ingresado por el usuario es un número multiplo de 5

int main() {

	setlocale(LC_ALL,"spanish");

	int num = 0;

	printf("Ingresa un número: ");
	scanf("%d",&num);

	if (num % 5 == 0) {
		printf("El número es multiplo de 5\n");
	}
	else {
		printf("El número no es multiplo de 5\n");
	}

	return 0;
}