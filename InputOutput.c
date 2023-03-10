
#include<stdio.h>
#include<stdbool.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL,"spanish"); // Para poder usar las ñ y los acentos del español

	int num1=0,num2=0,suma=0;	

	printf("Ingrese el primer número: ");
	scanf("%d",&num1); // ----- scanf(); function to capture the input from user/ scanf(); función para capturar la entrada de datos del usuario

	printf("Ingrese el segundo número: ");
	scanf("%d",&num2);

	suma = num1 + num2;
	printf("La suma de los valores es: %d",suma);

	return 0;
}