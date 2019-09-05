#include <stdio.h>
#include <stdlib.h>
void menu();
float suma(float a, float b); 
float resta(float a, float b); 
float multiplicar(float a, float b); 
float dividir(float a, float b); 
int main() {
  int opc;
  float a, b;
  do {    
    menu();
    scanf("%d",&opc);
    switch(opc) {
      case 1:
      	system("cls");
        printf("\nIntroduce un numero: ");
        scanf("%f", &a);
        printf("\nIntroduce otro numero: ");
        scanf("%f", &b);
        printf("La suma es: %.2f\n\n",suma(a, b));
        break;
      case 2:
      	system("cls");
        printf("\nIntroduce un numero: ");
        scanf("%f", &a);
        printf("\nIntroduce otro numero: ");
        scanf("%f", &b);
        printf("La resta es %.2f", resta(a, b));
        break;
      case 3:
      	system("cls");
        printf("\nIntroduce un numero: ");
        scanf("%f", &a);
        printf("\nIntroduce otro numero: ");
        scanf("%f", &b);
        printf("La multiplicacion es: %.2f\n\n",multiplicar(a, b));
        break;
      case 4:
      	system("cls");
        printf("\nIntroduce numero: ");
        scanf("%f", &a);
        printf("\nIntroduce otro numero: ");
        scanf("%f", &b);
        printf("La division es: %.2f\n",dividir(a, b));
        break;
      case 5: break;
      default:
        printf("\nIntroduce una opción valida");
    }
  } while (opc != 5);
}
void menu() {
  printf ("\nSelecciona una de las siguientes opciones:\n");
  printf ("1.- Sumar\n");
  printf ("2.- Restar\n");
  printf ("3.- Multiplicar\n");
  printf ("4.- Dividir\n");
  printf ("5.- Salir\n");
  printf ("Selecciona una opcion: ");
}
float suma(float a, float b) {
  return a+b;
}

float resta(float a, float b) {
  return a-b;
}
float multiplicar(float a, float b) {
  return a*b;
}
float dividir(float a, float b) {
  return a/b;
}
