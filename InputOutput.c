
#include<stdio.h>
#include<stdbool.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL,"spanish"); // Para poder usar las � y los acentos del espa�ol

	int num1=0,num2=0,suma=0;	

	printf("Ingrese el primer n�mero: ");
	scanf("%d",&num1); // ----- scanf(); function to capture the input from user/ scanf(); funci�n para capturar la entrada de datos del usuario

	printf("Ingrese el segundo n�mero: ");
	scanf("%d",&num2);

	suma = num1 + num2;
	printf("La suma de los valores es: %d",suma);

	return 0;
}