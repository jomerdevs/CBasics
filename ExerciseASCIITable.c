
#include<stdio.h>

int main() {

	/*programa para mostrar los caracteres de la tabla ascii por consola, la tabla ascii tiene 255 elementos
	por lo que ya sabemos el largo a recorrer*/
	for (int i = 0; i <= 255; i++) {
		printf("%d = %c\t",i,i);
	}
}