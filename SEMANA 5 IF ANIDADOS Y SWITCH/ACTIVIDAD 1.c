#include <stdio.h>
#include <stdlib.h>

int main () {
float hemo;
int edad;
printf("Introduce la edad: \n");
scanf("%d",&edad);
printf("Introduce la hemoglobina: \n");
scanf("%f",&hemo);
if(edad == 0 && edad ==1 || hemo >=13 && hemo <=26){
if(edad >1 && edad <=6 || hemo >=10 && hemo <=18)
if(edad >6 && edad <=12 || hemo >=11 && hemo <=15)
if(edad >12 && edad <=35 || hemo >=11.5 && hemo <=15)
if(edad >=35 && edad <=60 || hemo >=12.6 && hemo <=15.5)
if(edad >60 && edad <=100 || hemo >=13 && hemo <=15.5)
printf("negativo\n");
} else {printf("Positivo\n");}
system("pause");
return 0;
}
