#include<stdio.h>
#include <stdlib.h>
int main (){
	int n=0,y,serie=0,i= 0,suma=0;
	printf("ingrese el numero de la serie: \n");
	scanf("%d",&n);
	printf("ingrese el limite de la seire: \n");
	scanf("%d",&y);
	printf("SERIE = ");
	while(i<y){
		serie=serie+n;
		i++;
printf("%d ",serie);
		suma=suma+serie;}
		printf("\n La suma de la serie es: %d\n",suma);
		system("pause");
	return 0; }
