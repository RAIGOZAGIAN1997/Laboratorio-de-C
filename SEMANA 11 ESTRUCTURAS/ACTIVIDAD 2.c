#include <stdio.h>
#include <stdlib.h>
struct cdd{
	char titulo [50];
	char artista [50];
	int ncanciones;
	float precio; 
	char fecha [10000]; 
}cdd2,cdd1= {"Amazing Song","Benito Alvarez",15,250.1997,"02/07/2017"};

int main (){
	printf("TITULO: ");
	gets(cdd2.titulo);
	printf("\nARTISTA: ");
	gets(cdd2.artista);
	printf("\nFECHA DE COMPRA: ");
	gets(cdd2.fecha);
	printf("\nNUMERO DE CANCIONES: ");
	scanf("%d",&cdd2.ncanciones);
	printf("\nPRECIO: ");
	scanf("%f",&cdd2.precio);
	
	
	printf("CD1\n");
	printf("Titulo: %s",cdd1.titulo);
	printf("\nArtista: %s",cdd1.artista);
	printf("\nNumero de canciones: %d",cdd1.ncanciones);
	printf("precio: %f",cdd1.precio);
	printf("\nfecha: %s",cdd1.fecha);	
	
	printf("\n");
	printf("\n");
	
	printf("CD2\n");
	printf("Titulo: %s",cdd2.titulo);
	printf("\nArtista: %s",cdd2.artista);
	printf("\nNumero de canciones: %d",cdd2.ncanciones);
	printf("\nprecio: %f",cdd2.precio);
	printf("\nfecha: %s",cdd2.fecha);
	
	system("pause");
	return 0;
}
	

	
	

