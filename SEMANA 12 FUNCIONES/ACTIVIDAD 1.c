#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int validarnumero(char numero[]);

int main()
{
   char numero[5];
   int N;
   int numerovalido;
   do
   {
       printf("Ingresa un numero: ");
       scanf("%s",numero);
       N=validarnumero(numero);

   }while(N==0);

   numerovalido=atoi(numero);
   printf("Es numero");

   getch();
   return 1;
}
/////////////////
int validarnumero(char numero[])
{
    int i;
    for(i=0; i<strlen(numero); i++)
    {
        if(!(isdigit(numero[i])))
        {
            printf("No es un numero\n");
            system("pause");
            return 0;
        }
    }
    return 1;
}
