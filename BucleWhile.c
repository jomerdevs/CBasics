
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

/*
LOS BUCLES SON ESTRUCTURAS REPETITIVAS QUE NOS PERMITEN REPETIR UN BLOQUE DE INSTRUCIONES HASTA QUE SE CUMPLA LA CONDICION DADA
EN EL LENGUAJE DE PROGRAMACION C EXISTEN VARIOS TIPOS DE BUCLES COMO SON: while, for, do-while
*/

int main() {
	setlocale(LC_ALL, "spanish");

	int password = 0, confirmPassword = 0;
	bool flag = false;

	while (flag == false) {
		printf("Ingrese su contrase�a: ");
		scanf_s("%d", &password);		
		printf("Por favor confirmar contrase�a: ");
		scanf_s("%d", &confirmPassword);
		printf("\n"); // salto de linea

		if (password == confirmPassword) {
			flag = true;
		}
		else {
			printf("--- Las contrase�as no coinciden, intentelo nuevamente. ---\n");
			printf("\n"); // salto de linea
		}
	}

	printf("Contrase�a validada :) \n");

	return 0;
}