#include<stdio.h>
#include<conio.h>

void ingresar(int vec[3])
{
    int i;
    printf("Generar vector.\n");
    for(i=0;i<3;i++)
    {
        printf("Ingresar elemento:");
        scanf("%d",&vec[i]);
    }
}

void generarVector(int vec1[3],int vec2[3],int vecsuma[3])
{
    int i;
    for(i=0;i<3;i++)
    {
        vecsuma[i]=vec1[i]+vec2[i];
    }
}

void resultado(int vec[3])
{
    int i;
    printf("\n Suma de vectores :");
    for(i=0;i<3;i++)
    {
        printf("%d ",vec[i]);
    }
    printf("\n");
}


int main()
{
    int vector1[3];
    int vector2[3];
    int vecsuma[3];
    ingresar(vector1);
    ingresar(vector2);
    generarVector(vector1,vector2,vecsuma);
    resultado(vecsuma);
    getch();
    return 0;
}
