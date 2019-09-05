#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

int salario=15000;

int t;
int sa;
float saf;


printf("Introduzca el tiempo del trabajador \n");
scanf("%d",&t);

if(t==10)

sa = salario *.10;
saf = sa + salario;
printf("El sueldo que le corresponde al trabajador es: %f \n",saf);

if(t==5)

sa = salario *.07;
saf = sa + salario;
printf("El sueldo que le corresponde al trabajador es: %f \n",saf);

if(t==4)
sa = salario *.05;
saf = sa + salario;
printf("El sueldo que le corresponde al trabajador es: %f \n",saf);

if(t==3)
sa = salario *.03;
saf = sa + salario;
printf("El sueldo que le corresponde al trabajador es: %f \n",saf);


system("pause");
return 0;


}

