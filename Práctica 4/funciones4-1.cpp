#include<stdio.h>
#include<conio.h>

void cargar(int vec1[5], int vec2[2])
{
    for(int x=0;x<5;x++)
    {
        printf("Ingrese elemento %d del vector 1: ",x+1);
        scanf("%i",&vec1[x]);
    }

    for(int z=0;z<5;z++)
    {
        printf("Ingrese elemento %d del vector 2: ",z+1);
        scanf("%i",&vec2[z]);
    }

    printf("Contenido completo del vector 1: [ ");
    for(int i=0;i<5;i++)
    {
        printf("%i ",vec1[i]);
    }
    printf("] \n");

    printf("Contenido completo del vector 2: [ ");
    for(int j=0;j<5;j++)
    {
        printf("%i ",vec2[j]);

    }
    printf("]");
}


int main()
{
    int vector1[5], vector2[5];
    cargar(vector1, vector2);
    getch();
    return 0;
}
