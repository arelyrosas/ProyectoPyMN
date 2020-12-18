#include <stdio.h>
int sumar (int vec[5], int i=0, int suma=0)
{
for (i=0; i<=4; i++){
    printf("Indique elemento: ");
    scanf("%d", &vec[i]);
    suma= suma + vec[i];
}
printf("Su suma es %d", suma);
}
int main()
{
    sumar(suma)
    getch();
    return 0;
}
