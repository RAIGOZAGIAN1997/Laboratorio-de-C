#include <stdio.h>
#include <stdlib.h>
int main (){
	char cadena [50];
	char *cadenas = &cadena;
	printf("Dame una cadena\n");
	gets(cadena);
	printf("La copia de %s es: %s ",cadena,cadenas);
	system("pause");
	return 0;
}
