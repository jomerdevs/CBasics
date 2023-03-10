
#include<stdio.h>
#include<locale.h>

/* 
	EN: CALCULATE A RECTAGLE AREA AND PERIMETER TAKING THE DATA FROM USER  
	ES: CALCULAR EL AREA Y PERIMETRO DE UN RECTANGULO TOMANDO LOS DATOS DEL USUARIO
*/

int main() {

	setlocale(LC_ALL, "spanish"); // Para poder usar las � y los acentos del espa�ol

	float base = 0, altura = 0, area = 0, perimetro;

	printf("Ingrese la medida de la base: ");
	scanf("%f",&base);

	printf("Ingrese la medida de la altura: ");
	scanf("%f", &altura);

	area = base * altura;
	perimetro = base + altura + base + altura;

	printf("El rect�ngulo de base %.2f y de altura %.2f tiene un �rea de: %.2f y un per�metro de: %.2f \n", base, altura, area, perimetro);

	return 0;
}