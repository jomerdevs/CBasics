
#include<stdio.h>
#include<locale.h>

/* --- EL OPERADOR TERNARIO SE USA PARA EVALUAR UNA CONDICION Y DAR 2 POSIBLES INSTRUCCIONES SEGUN SE 
CUMPLA O NO LA CONDICION, LAS INSTRUCCIONES QUE RETORNE DEBEN DE SER DE UNA LINEA CADA UNA --- */
int main() {
	setlocale(LC_ALL,"spanish");

	int numero = 5;

	//determinar si el n�mero es positivo o no
	(numero > 0) ? printf("El n�mero es positivo\n") : printf("El n�mero no es positivo\n") ;

	return 0;
}