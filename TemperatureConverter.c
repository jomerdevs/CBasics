
#include<stdio.h>
#include<locale.h>

/*
	TEMPERATURE CONVERTER FROM CELCIUS TO OTHERS / CONVERSOR DE TEMPERATURA DE CELCIUS A OTROS
*/
int main() {

	setlocale(LC_ALL, "spanish"); // Para poder usar las ñ y los acentos del español

	float celcius = 0, kelvin = 0, farenheit = 0;
	int opcion = 0;

	printf("Ingrese la temperatura en celcius que deseas convertir: ");
	scanf("%f",&celcius);

	printf("Seleccione a que tipo la quiere convertir:\n-- Presione (1) para Farenheit --\n-- Presione (2) para Kelvin --\n");
	scanf("%d",&opcion);

	kelvin = celcius + 273.15;
	farenheit = (celcius * 1.8) + 32;

	switch (opcion)
	{
		case 1:
			printf("El equivalente a %.2f grados celcius en grados farenheit es de %.2f grados\n", celcius, farenheit);
			break;
		case 2:
			printf("El equivalente a %.2f grados celcius en grados kelvin es de %.2f grados\n", celcius, kelvin);
			break;
		default:
			printf("XXX-- Opción incorrecta --XXX\n");
			break;
	}

	return 0;
}