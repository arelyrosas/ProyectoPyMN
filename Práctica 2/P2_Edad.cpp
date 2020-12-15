#include<stdio.h>
int main() {
int EDAD;
printf("Inique su edad: \n");
scanf("%d", &EDAD);
if (EDAD<18) {
  printf("Usted es meno de edad.\n");
}
else {
  printf("Usted es mayor de edad.\n");
}
  return 0;
}
