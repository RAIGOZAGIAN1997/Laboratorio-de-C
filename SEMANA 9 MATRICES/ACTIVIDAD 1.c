#include <stdio.h>
#include <stdlib.h>

int main () {
int matriz['i']['j'];
int horizontal['j'];
int vertical ['i'];
int fila,columnas;
int filas=3;
int suma;
int i,j;
do{
	printf("Introduzca el numero de filas: ");
	scanf("%d",&filas);
}while (filas!=3);
columnas =filas;
printf("\n\n");

for (i=0; i<filas; i++){
	for(j=0;j<columnas;j++){
		printf("Introduce un numero para la matriz [%d][%d]:  ",i+1,j+1);
		scanf("%d",&matriz[i][j]);
	}
}
for(fila=0;fila<columnas;filas++){
	suma=0;
	for(columnas=0;columnas<filas;columnas++)
	{
		suma=suma+matriz[filas][columnas];
	}
	vertical [fila]=suma;
	}
	for(i=0;i<4;i++){
	printf("%d\n",vertical [i]);
}
for(columnas =0; columnas <5; columnas++){
	suma=0;
	for(fila=0; fila <4; filas++)
	{
		suma=suma+matriz[filas][columnas];
	}
	horizontal [columnas]=suma;
}

for(i=0;i<5;i++)
{
	printf("%d",horizontal [i]);
}
system("pause");
return 0;
}

