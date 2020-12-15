#include <stdio.h>
#include <conio.h>
int main() {
  int OPCION;
  float IMPORTE, DSCTO, TOTAL;
  printf("Indique el departamento en el que desea comprar: \n 1.Perfumeria \n 2.Salchichoneria\n 3.Carniceria\n 4.Limpieza\n" );
  scanf("%d", &OPCION);
  if (OPCION==1) {
    printf("Indique el importe del articulo: \n");
    scanf("%f", &IMPORTE);
    DSCTO=(IMPORTE*.20);
    TOTAL = (IMPORTE-DSCTO);
    printf("El total a pagar es: %.2f \n", TOTAL);
  }
  else {
    printf("Opcion no valida, seleccione otra opcion");
  }
  return 0;
}
