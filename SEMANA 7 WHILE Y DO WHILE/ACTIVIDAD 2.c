#include <stdio.h>
#include <stdlib.h>
int main (){
	int deposito=0,retiro=0,act=0;
	int opc;
	do{
	printf("Seleccione una opcion del menu:\n");
    printf("1-Deposito\n");
	printf("2-Retiro\n");
	printf("3-Consulta de saldo\n");
	printf("4-Salir\n");
	scanf("%d",&opc);
	switch (opc){
		case 1:
			printf("ingrese la cantidad del deposito: \n");
			scanf("%d",&deposito);
			
			break;
		case 2:
			printf("ingrese la cantidad que quiere retirar: \n");
			scanf("%d",&retiro);
			deposito=deposito-retiro;
			break;
		case 3:
			
			printf("Su saldo actual es: %d\n",deposito);
			break;
	}
	system("pause");
	system("cls");
	}while(opc!= 4);
return 0;
}
