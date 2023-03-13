
#include<stdio.h>
#include<locale.h>
#include<stdbool.h>

/*
A DIFERENCIA LOS OTROS BUCLES, EL BUCLE for RECIBE 3 PARAMETROS, UN INDICE(El cual puede ser declarado antes o dentro de los parentesis del for), 
LA CONDICION y UNA INSTRUCCION NORMALMENTE UN INCREMENTO O DECREMENTO DEL INDICE 
*/
int main() {
	setlocale(LC_ALL, "spanish");


	int valor;
	//bucle for con el indice declarado antes
	for (valor = 1; valor <= 10; valor++) {
		printf("valor= %d\n",valor);
		//este bucle va a imprimir los valores del 1 al 10
	}

	//bucle for declarando el indice dentro de los parametros del for
	for (int i = 1; i <= 10; i++) {
		printf("i = %d\n", i);
		//este bucle va a imprimir los valores del 1 al 10
	}


	return 0;
}