#include <stdio.h>
#include <stdlib.h>


int main () {
	
	char carrera[100] ;
	char nombre[100] ;
	int semestre;
	float prom;
	
printf("Dame el nombre: \n");
scanf("%s",&nombre);
printf("Dame la carrera: \n");
scanf("%s",&carrera);
printf("ingrese su semestre: \n");
scanf("%d",&semestre);
printf(" Dame su promedio: \n");
scanf("%f",&prom);
printf("Estudiante de FCFM \n");
printf("Nombre: %s\n",nombre);
printf("carrera: %s\n",carrera);
printf("semestre: %d\n",semestre);
printf("promedio: %f\n",prom);

system("pause");
return 0;
	
	
	
	
	
	
	
}
