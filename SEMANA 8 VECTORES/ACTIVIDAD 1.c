#include <stdio.h>
#include <stdlib.h>

int main() {
int posiciones [100];
int pos,i;
int suma = 0;
float prom= 0;
printf("Ingrese la longitud del arreglo: ");
scanf("%d",&pos);
for(i=0;i<pos;i++){
printf("Ingrese el numero de la posicion: \n");
scanf("%d",&posiciones[i]);
suma = suma + posiciones[i];
prom=suma/pos;
}
printf("El arreglo es: \n %d",posiciones[i]);
printf("El promedio es: %2f ",prom);
system("pause");
return 0;
}

