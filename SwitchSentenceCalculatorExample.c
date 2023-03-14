
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

/*
LA ESTRCUTURA DE CONTROL switch SIRVE PARA EVALUAR UNA OPCION QUE PUEDE TOMAR DISTINTOS VALORES Y DE ACUERDO A 
CADA VALOR REALIZAR UNA INSTRUCCION U OTRA

--- crearemos una calculadora que nos permita realizar las siguientes operaciones: suma, resta, multiplicaci�n y divisi�n,
	con 2 n�meros, se va a ejecutar la opci�n que indique el usuario, en caso de querer salir del programa se podr� salir
	del mismo, en caso de pedir una opci�n no v�lida se volver� a pedir una opci�n hasta ingresar una v�lida
*/
int main() {

	setlocale(LC_ALL,"spanish");

	int numero1 = 0, numero2 = 0, opcion = 0, suma = 0, resta = 0, multiplicacion = 0;
	float division = 0;
	bool continuar = false;

	while (continuar == false) {
		printf("Ingrese el primer n�mero: ");
		scanf_s("%d",&numero1);
		printf("\n");
		printf("Ingrese el segundo n�mero: ");
		scanf_s("%d", &numero2);
		
		printf("\nIngrese opci�n que desea realizar: \n");
		printf("1) Suma\n");
		printf("2) Resta\n");
		printf("3) Multiplicaci�n\n");
		printf("4) Divisi�n\n");
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
				printf("El resultado de la multiplicaci�n es: %d\n", multiplicacion);
				continuar = true;
				break;
			case 4: division = (float)numero1 / (float)numero2; //hacer el casting(conversi�n de tipos) de entero a decimal para que nos muestre los decimal de la divisi�n
				printf("El resultado de la divisi�n es: %.2f\n", division);
				continuar = true;
				break;
			case 5: continuar = true; break;
			default: printf("XX-- Opci�n inv�lida --XX\n"); break;

		}
	}

	return 0;
}