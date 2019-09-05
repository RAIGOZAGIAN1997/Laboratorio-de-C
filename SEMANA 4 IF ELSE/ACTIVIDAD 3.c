#include <stdio.h>
#include <stdlib.h>

char vocal;

int main(){

printf("Introduzca un caracter\n");
scanf("%c",&vocal);

if(vocal =='a'|| vocal =='e'|| vocal == 'i' || vocal == 'o' || vocal == 'u'|| vocal == 'A' || vocal == 'E'|| vocal == 'I' || vocal == 'O'|| vocal == 'U')
printf("Es una vocal\n");
else{
	printf("No es una vocal\n");
}
system("pause");
return 0;
}
