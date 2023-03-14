
#include<stdio.h>
#include<locale.h>

/*
	EL BUCLE do-while ES PRACTICAMENTE IGUAL QUE EL BUCLE while, CON LA DIFERENCIA DE QUE EN EL BUCLE do-while 
	ASEGURAMOS QUE EL CODIGO DENTRO DEL BUCLE SE EJECUTE AL MENOS 1 VEZ
*/

int main() {
	setlocale(LC_ALL,"spanish");

	int respuesta = 1;

	do {
		//Esto se ejecuta aunque inicalmente la condición del while no se cumpla, como es el caso que respuesta no es igual a 2
		printf("Desea cerrar el programa?   1) Si    2) No\n");
		scanf("%d",&respuesta);
	} while (respuesta == 2);

	return 0;
}