#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int horas;
int minutos;
int segundos;

int main(){

printf("Introduzca horas\n");
scanf("%d",&horas);
printf("Introduzca minutos\n");
scanf("%d",&minutos);
printf("Introduzca segundos\n");
scanf("%d",&segundos);

if(horas >=0 && horas <=23 && minutos >= 0 && minutos <=59 && segundos >=0 && segundos <=59){
printf("HORA\n %d : %d : %d \n",horas,minutos,segundos);
printf(" CORRECTA\n");
}
else{

	printf("INCORRECTA\n");
}

system("pause");
return 0;
}

