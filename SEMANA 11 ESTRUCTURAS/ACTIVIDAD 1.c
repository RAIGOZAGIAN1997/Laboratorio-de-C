#include <stdio.h>
#include <stdlib.h>
 struct empleado{
 char nombre[20];
 char sexo [20];
 float salario;
 int edad [10];
 }empleados[100];
 int main(){
 	int i,n,smay,smen;
 	float mayor =0.0, menor =999999999;
 	printf("Introduzca el numero de empleados: \n");
 	scanf("%i",&n);
 	for(i=0;i<n;i++){
 		fflush(stdin);
 	printf("\nEmpleado #%i\n",i+1);
 	printf("\nNombre: ");
 	gets(empleados[i].nombre);
 	printf("Edad: ");
 	 	scanf("%d",empleados[i].edad);
 	printf("\nSexo: ");
 	fflush(stdin);
 	 	gets(empleados[i].sexo);
 	printf("\nSalario: ");
 	 scanf("%f",&empleados[i].salario);
	 }
	 for(i=0;i<n;i++){
	 	if(empleados[i].salario > mayor){
	 		mayor = empleados [i].salario;
	 		smay=i;
		 }
		 if(empleados[i].salario <menor){
	 		menor = empleados [i].salario;
	 		smen=i;
	 }
}
printf("El trabajador con el mayor sueldo es %s con un pago de %f\n",empleados[smay].nombre,empleados[smay].salario);
printf("El trabajador con el menor sueldo es %s con un pago de %f\n",empleados[smen].nombre,empleados[smen].salario);
	 system("pause");
	 return 0;
 }
 
