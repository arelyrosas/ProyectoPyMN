#include<stdio.h>
#include<conio.h>
int main()
{
  int OPCION;
  float GANANCIA, IMPUESTO_TOTAL;
  printf("Seleccione una opcion:\n 1. Soltero\n 2. Casado\n" );
  scanf("%d", &OPCION);
  if (OPCION==1) {
    printf("Indique su ganancia mensual: \n" );
    scanf("%f", &GANANCIA );
    if (GANANCIA<=32000){
        IMPUESTO_TOTAL = (GANANCIA*.10);
        printf("El importe a pagar es de: %.2f", IMPUESTO_TOTAL);
    }
    else {
      IMPUESTO_TOTAL = (GANANCIA*.25);
      printf("El importe a pagar es de: %.2f", IMPUESTO_TOTAL);
    }
  }
  else {
  printf("Indique su ganancia: \n");
  scanf("%f", &GANANCIA);
      if (GANANCIA<=64000) {
        IMPUESTO_TOTAL = (GANANCIA*.10);
        printf("El importe a pagar es de: %.2f", IMPUESTO_TOTAL);
      }
      else{
        IMPUESTO_TOTAL = (GANANCIA*.25);
        printf("El importe a pagar es de: %.2f", IMPUESTO_TOTAL);
      }
  }
  return 0;
  getch();
  }
