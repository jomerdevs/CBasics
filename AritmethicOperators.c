#include<stdio.h>
#include<locale.h>
/*
	BASIC ARITMETHIC OPERATIONS BETWEEN / OPERACIONES MATEMATICAS BASICAS

	|-- (OPERATOR / OPERADOR)      (OPERATION / OPERACION) --|
	         +                     addition/suma
			 -                     subtraction/resta
			 *                     multiplication/multipicaci�n
			 /                     division/divisi�n
			 %                     module/modulo
			 =                     assignment/asignacion
			 ++                    increment by 1/incremento en 1
			 --                    decrement by 1/decremento en 1
			 +=                    addition and assignment/suma y asignaci�n
			 -=                    substraction and assignment/resta y asignaci�n
			 *=                    multiplication and assignment/multiplicaci�n y asignaci�n
			 /=                    division and assignment/divisi�n y asignaci�n
*/

int main() {
	setlocale(LC_ALL,"spanish"); // Para poder usar las � y los acentos del espa�ol

	int num1 = 40, num2 = 15, suma = 0, resta = 0, multiplicacion = 0, modulo = 0;
	float division = 0;

	suma = num1 + num2; // addition / suma
	
	resta = num1 - num2; // substraction / resta

	division = (float)num1 / (float)num2; // division / divisi�n

	multiplicacion = num1 * num2; // mutiplication / multiplicaci�n

	modulo = num1 % num2; // module / modulo o resto

	printf("El resultado de la suma es: %d\n", suma);
	printf("El resultado de la resta es: %d\n", resta);
	printf("El resultado de la divisi�n es: %.2f\n", division);
	printf("El resultado de la multiplicaci�n es: %d\n", multiplicacion);
	printf("El modulo de la divisi�n entre %d y %d es: %d\n", num1, num2, modulo);
	printf("Incremento de num1 en 1: %d\n", ++num1); // hacemos pre incremento para que lo puedo incrementar antes de imprimirlo
	printf("Decremento de num2 en 1: %d\n", --num2); // hacemos pre decremento para que lo puedo incrementar antes de imprimirlo

	return 0;
}