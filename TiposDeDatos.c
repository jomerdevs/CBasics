#include<stdio.h>
#include<stdbool.h>
/*
    ------------------------ TIPOS DE DATOS EN C, SUS RANGOS Y ESPECIFICANION -----------------------

	TIPO DE DATO           TAMAÑO            RANGO DE VALORES                       ESPECIFICACION
	char --------------->  1 Byte(8bits) --> con signo: -128 a 127 --------------->       %c
									         sin signo: 0 a 255
	short int (short) -->  2 Bytes --------> con signo: -32768 a 32767 ----------->       %d
											 sin signo: 0 a 65535
	int  --------------->  4 Bytes --------> con signo: -2147483648 a 2147483647-->       %d
											 sin signo: 0 a 4294967295
	long int (long) ---->  8 Bytes --------> con signo: -2147483648 a 2147483647-->       %lld
											 sin signo: 0 a 4294967295
	bool --------------->  1 Byte  --------> true o false     -------------------->
	float -------------->  4 Bytes --------> 3.4e +/- 38 (6 decimales) ----------->       %f
	double ------------->  8 Bytes --------> 1.7e +/- 308 (15 dígitos) ----------->       %llf
	long double -------->  8 Bytes --------> 1.7e +/- 308 (15 dígitos) ----------->
	otros										cadena de caracteres   ----------->       %s
*/
int main() 
{
	// TYPE CHAR/TIPO CHAR
	char a = 'b';
	printf("El valor de la variable a es %c y su peso es de: %d byte\n", a, sizeof(a)); // sizeof() function give us the variable size/La función sizeof nos da el tamaño de la variable

	// TYPE SHORT INT (SHORT)/TIPO SHORT INT (SHORT) 
	short shrt = 30000;
	unsigned short unsigShort = 60000; // unsigned if we want to accept only positive numbers and can store a higher positive value
	printf("El valor de la variable shrt es %d y su peso es de: %d bytes\n", shrt, sizeof(shrt)); // 2 bytes

	// TYPE INT/ TIPO INT
	int num = 200000000;
	unsigned int unNum = 2000000000;
	printf("El valor de la variable num es %d y su peso es de: %d bytes\n", num, sizeof(num)); // 4 bytes

	// TYPE LONG INT (LONG)
	long long lng = 20000000000;
	printf("El valor de la variable lng es %lld y su peso es de: %d bytes\n", lng, sizeof(lng)); // 8 bytes

	// TYPE FLOAT/TIPO FLOAT
	float flt = 3.8; // %f shows all 6 decimals, %.1f shows only 1 decimal, %.2f shows only 2 decimals after the point
	printf("El valor de la variable flt es %f y su peso es de: %d bytes\n", flt, sizeof(flt)); // 4 bytes
	printf("El valor de la variable flt es %.1f y su peso es de: %d bytes\n", flt, sizeof(flt)); // shows only 1 decimal after the point
	printf("El valor de la variable flt es %.2f y su peso es de: %d bytes\n", flt, sizeof(flt)); // shows only 2 decimal after the point

	// TYPE BOOL/TIPO BOOL
	bool booleano = true;
	printf("%s", booleano?"true y su peso es de: 1 byte\n":"false y su peso es de: 1 byte\n"); // 1 byte

	return 0;
}