#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct persona {
	char nombre[20], apellido[20],telefono[15];
	
}per;
int main (){
	FILE *y=fopen("Agenda.txt","a");
	do{
		system("cls");
		printf("\nIngresa el nombre, el programa terminara.\n""Verificar su archivo.txt\n",160);
		printf("\nNombre: "); gets(per.nombre);
		fflush(stdin);
		if(per.nombre [0] !=0){
		printf("\nApellido: "); 
		gets(per.apellido);
		fflush(stdin);
		printf("\nTelefono: "); gets(per.telefono); 
		fflush(stdin);
		fwrite(&per,sizeof(struct persona),1,y);
		fprintf(y,"\n-----------------------------------------------------------------------------\n");}
	
	}while(per.nombre[0] != 0);
	fclose(y);
	system("pause");
	return 0;
}
