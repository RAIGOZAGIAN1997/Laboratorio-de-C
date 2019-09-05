#include <stdio.h>
#include <stdlib.h>
int main (){
	int i,suma=0;
	printf("Numeros del 1 al 500 multiplos de 5 o 9\n");
	for (i=0;i<500;i++){
		if(i%5==0 || i%9 ==0 ){
			printf("%d\t",i);
			suma = suma +i;
		}
	}
	printf("\n La suma es: %d ",suma);
	system("pause");
	return 0;
}
