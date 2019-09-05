#include <stdio.h>
#include <stdlib.h>
int main (){
	int array[10],i,n;
	int *np =&array;
	int j=i;
	int t=i;
	
	int *arrayp =&array;
	printf("Tamano del arreglo: ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
	printf("Posicion [%i] = ",0+i);
	scanf("%d",&array[i]);
	}
	printf("Impresion con notacion de arreglos\n");
	for(j=0;j<n;j++){
		printf("Posicion [%i] = %d\n",0+j,array[j]);
	}
	printf("Impresion con notacion de puntero\n");
	for(t=0;t<n;t++){
	printf("Posicion [%i] = %d \n",0+t,np[t]);
	}
	system("pause");
	return 0;
}
