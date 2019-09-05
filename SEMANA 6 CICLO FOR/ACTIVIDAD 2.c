#include <stdio.h>
#include<math.h>
#include <stdlib.h>
int main (){
	int i=0,sumaimpar = 0,n,sumapar=0,mediaimpar=0,mediapar=0;
	for(i;i<200;i++) {	
if(i%2>0)
	sumaimpar+=i;}
for(n=0;n<200;n=n+2){
	sumapar+=n;	}
printf("\t");
printf("Suma de los numeros pares: %d\n\t", sumapar);
mediapar=sumapar/100;
printf("Media de los numeros pares es: %d\n\t",mediapar);
printf("\n\t");
printf("\n\t");
printf("Suma de los numeros impares: %d\n\t", sumaimpar);
mediaimpar=sumaimpar/100;
printf("Media de los numeros impares es: %d\n\t",mediaimpar);
system("pause");
return 0;
}

