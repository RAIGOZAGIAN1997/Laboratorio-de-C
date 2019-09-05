#include <stdio.h>
#include <stdlib.h>
#

int main()
{
   int dia,mes,t=0;
printf("CALCULO DEL A%cO NO BISIESTO\n",164);
   printf( "\n   Introduzca numero del dia: " );
   scanf( "%d", &dia );
   printf( "\n   Introduzca numero del mes: " );
   scanf( "%d", &mes );
   switch ( mes )
   {
      case 1 : 
      if(dia >0 && dia <= 31)
	  t=dia;
	  printf("El dia del %d del mes %d es el %d",dia,mes,t);
               break;
      case 2 : if(dia >0 && dia <= 28)
	  t=dia+31;
	  printf("El dia del %d del mes %d es el %d",dia,mes,t);
               break;
      case 3 : if(dia >0 && dia <= 30)
	  t=59+dia;
	  printf("El dia del %d del mes %d es el %d",dia,mes,t);
               break;
      case 4 : 
	  if(dia >0 && dia <= 31)
	  t=89+dia;
	  printf("El dia del %d del mes %d es el %d",dia,mes,t);
               break;
      case 5 : if(dia >0 && dia <= 30)
	  t=120+dia;
	 printf("El dia del %d del mes %d es el %d",dia,mes,t);
               break;
      case 6 : if(dia >0 && dia <= 31)
	  t=151+dia;
	 printf("El dia del %d del mes %d es el %d",dia,mes,t);
               break;
      case 7 : if(dia >0 && dia <= 30)
	  t=182+dia;
	  printf("El dia del %d del mes %d es el %d",dia,mes,t);
               break;
      case 8:if(dia >0 && dia <= 31)
       t=212+dia;
	  printf("El dia del %d del mes %d es el %d",dia,mes,t);
       break;
      case 9:if(dia >0 && dia <= 30)
       t=243+dia;
	  printf("El dia del %d del mes %d es el %d",dia,mes,t);
       break;
      case 10:if(dia >0 && dia <= 31)
      t=273+dia;
	  printf("El dia del %d del mes %d es el %d",dia,mes,t);
       break;
       case 11:if(dia >0 && dia <= 30)
       printf("El dia del %d del mes %d es el %d",dia,mes,t);
	  t=304+dia;
        break;
        case 12: if(dia >0 && dia <= 31)
	  t=334+dia;
        printf("El dia del %d del mes %d es el %d",dia,mes,t);
        break;
   default : printf( "\n  Los datos introducidos son invalidos " );
   }
system("pause");
   return 0;
}
   
