
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

/*
LA ESTRCUTURA DE CONTROL switch SIRVE PARA EVALUAR UNA OPCION QUE PUEDE TOMAR DISTINTOS VALORES Y DE ACUERDO A 
CADA VALOR REALIZAR UNA INSTRUCCION U OTRA

--- crearemos una calculadora que nos permita realizar las siguientes operaciones: suma, resta, multiplicación y división,
	con 2 números, se va a ejecutar la opción que indique el usuario, en caso de querer salir del programa se podrá salir
	del mismo, en caso de pedir una opción no válida se volverá a pedir una opción hasta ingresar una válida
*/
int main() {

	setlocale(LC_ALL,"spanish");

	int numero1 = 0, numero2 = 0, opcion = 0, suma = 0, resta = 0, multiplicacion = 0;
	float division = 0;
	bool continuar = false;

	while (continuar == false) {
		printf("Ingrese el primer número: ");
		scanf_s("%d",&numero1);
		printf("\n");
		printf("Ingrese el segundo número: ");
		scanf_s("%d", &numero2);
		
		printf("\nIngrese opción que desea realizar: \n");
		printf("1) Suma\n");
		printf("2) Resta\n");
		printf("3) Multiplicación\n");
		printf("4) División\n");
		printf("5) Salir del programa\n");
		scanf_s("%d",&opcion);

		switch (opcion) {
			case 1: suma = numero1 + numero2;
				printf("El resultado de la suma es: %d\n",suma);
				continuar = true;
				break;
			case 2: resta = numero1 - numero2;
				printf("El resultado de la resta es: %d\n",resta);
				continuar = true;
				break;
			case 3: multiplicacion = numero1 * numero2;
				printf("El resultado de la multiplicación es: %d\n", multiplicacion);
				continuar = true;
				break;
			case 4: division = (float)numero1 / (float)numero2; //hacer el casting(conversión de tipos) de entero a decimal para que nos muestre los decimal de la división
				printf("El resultado de la división es: %.2f\n", division);
				continuar = true;
				break;
			case 5: continuar = true; break;
			default: printf("XX-- Opción inválida --XX\n"); break;

		}
	}

	return 0;
}