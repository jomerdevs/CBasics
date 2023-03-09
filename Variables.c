#include<stdio.h>
/*
	------------- WORKING WITH VARIABLES / TRABAJANDO CON VARIABLES --------------

	****** LOCAL VARIABLE/VARIABLE LOCAL ******
	
	EN: It has a local scope, that is, they work while the method or function that is using them is 
	running and cannot be accessed implicitly by other methods or functions.
	ES: Tiene un alcance local, es decir funcionan mientras el método o función que las esté utilizando
	esté en funcionamiento y no puede ser accedida por otros métodos o funciones de forma implícita.

	****** GLOBAL VARIABLE/VARIABLE GLOBAL ******
	
	EN: Globally defined variables have a longer lifetime, as long as the executing program is running, 
	those variables can be accessed from anywhere in the code.
	ES: Las variables definidas de manera global tienen un tiempo de vida más largo, simpre y cuando el 
	programa se esté ejecutando esté en funcionamiento, esas variables pueden ser accedidas desde cualquier 
	parte del código.
	
*/

// GLOBAL VARIABLE/VARIABLES GLOBALES
int numGlobal = 10;
int numGlobal2 = 5;

int Sum(int n1, int n2)
{
	// LOCAL VARIABLE/VARIABLE LOCAL
	int result;
	result = n1 + n2;

	return result;
}

int main() 
{
	int res = Sum(numGlobal, numGlobal2);
	printf("resultado de la suma es igual a: %d", res);

	return 0;
}