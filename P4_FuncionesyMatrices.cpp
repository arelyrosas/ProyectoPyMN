#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int infomatriz(int arre[][100], int b, int c);
int suma_v1(int *arreglo, int a);
int matriz(int arre[][100], int b, int c);
int n_aleatorio (int *arreglo, int a);
int impresion_arr (int *arreglo, int a);
int suma_vecs (int *arreglo, int a);
int arre[100][100],arr_a[100][100],arr_b[100][100];
int opc,j,i,a,b,c,f1,c1,f2,c2;
int suma=0;
int arreglo_1[100], arreglo_2[100], arreglo_3 [100], arreglo_4[100];
int arregloss (int *arreglo, int a);
int impresion (int *arreglo, int a);
int matriz_col(int arre[][100], int b, int columnas);
int datoa(int arre[][100], int f1, int c1);
int datob(int arr_a[][100], int f2, int c2);
int mat(int arr_b[][100], int f1, int c1);
int main()
{
    printf("Problema 1: Imprimir arreglos\n");
    printf("Problema 2: Funcion imprimir 2 arreglos\n");
    printf("Problema 3: Suma de dos arreglos\n");
    printf("Problema 4: Suma elementos de un arreglo\n");
    printf("Problema 5: Matriz cuadrada\n");
    printf("Problema 6: Matriz cuadrada\n");
    printf("Problema 7: Suma de matrices\n");
    printf("Problema 8: Multiplicacion de matrices\n\n");
    printf ("Seleccione una opcion: \n");
    scanf("%d", &opc);
    switch (opc){
        case 1:
        printf("Indique el tamano de los arreglos: \n");
        scanf("%d",&a);
        printf("Indique elementos del arreglo 1 (%d): \n",a);
        arregloss (arreglo_1,a);
        printf("Indique los elementos del arreglo 2 (%d): \n",a);
        arregloss (arreglo_2,a);
        printf("arreglo 1: \n");
        impresion (arreglo_1,a);
        printf("arreglo 2: \n");
        impresion (arreglo_2,a);
        break;
        case 2:
        printf("Indique tamano de los arreglos: \n");
        scanf("%d",&a);
        printf("Vector 1: \n");
        impresion_arr(arreglo_1,a);
        printf("Vector 2: \n");
        impresion_arr(arreglo_2,a);
        break;
        case 3:
        printf("Indique tamano de arreglos: \n");
        scanf("%d",&a);
        printf("Indique elementos del arreglo 1 (%d): \n",a);
        arregloss (arreglo_1,a);
        printf("Indique elementos del arreglo 2 (%d): \n",a);
        arregloss (arreglo_2,a);
        printf("La suma de los elementos ingresados es: \n");
        suma_vecs (arreglo_3,a);
        break;
        case 4:
        printf("Indique el tamano del arreglo:\n");
        scanf("%d",&a);
        printf("Indique los elementos del arreglo 1 (%d): \n",a);
        arregloss (arreglo_1,a);
        printf("El resultado de la suma es:  ");
        suma_v1 (arreglo_4,a);
        printf("\n");
        break;
        case 5:
        printf ("Indique el numero de renglones:\n");
        scanf("%d",&b);
        printf ("Indique el numero de columnas\n");
        scanf("%d",&c);
        for (int i=1; i<=b; i++)
        for(int j=1;j<=c; j++){
        printf("Indique un numero: ");
        scanf("%d",&arre[i][j]);
        }
        printf("\n");
        printf ("Matriz final:\n");
        matriz(arre,b,c);
        printf("\n");
        break;
        case 6:
        printf("Indique numero de renglones:\n");
        scanf("%d",&b);
        printf ("Indique numero de columnas:\n");
        scanf("%d",&c);
        matriz_col(arre,b,c);
        printf("\n");
        break;
        case 7:
        printf("Indique el tamano de los arreglos:\n");
        scanf("%d",&a);
        printf("Vector 1: \n");
        impresion_arr(arreglo_1,a);
        printf("Vector 2: \n");
        impresion_arr(arreglo_2,a);
        suma_vecs (arreglo_3,a);
        break;
        case 8:
        printf("Indique numero de renglones de la matriz:\n");
        scanf("%d",&f1);
        printf("Indique numero de columnas de la matriz:\n");
        scanf("%d",&c1);
        printf("Indique numero de renglones de la matriz:\n");
        scanf("%d",&f2);
        printf("Indique numero de columnas de la matriz:\n");
        scanf("%d",&c2);
        if (f1==c2){
            printf ("M1: \n");
            datoa(arre,f1,c1);
            printf("M2: \n");
            datob(arr_a,f2,c2);
            printf("El resultado de la multiplicacion es: \n");
            mat(arr_b,f1,c1);
            printf(" \n");
        }else{
            printf("Error, verifique los datos\n");
        }
        break;
    }

    return 0;
}
int arregloss (int*arreglo,int a){
    for(j=1;j<=a;j++){
        printf("Elemento %d: ",j);
        scanf("%d",&arreglo[j]);

    }
    printf("\n");
}
int impresion (int*arreglo,int a){
    for(j=1;j<=a;j++){
        printf("n: [%d] : %d\n",j,arreglo [j]);

}
}
int n_aleatorio(int *arreglo, int a){
    int j;
    for(j=1; j<=a; j++){
        arreglo[j]=rand()%101;
    }
}
int impresion_arr(int *arreglo, int a){
    int j;
    for(j=1; j<=a; j++){
        n_aleatorio(arreglo,a);
        printf("Posicion: [%d]%d\n",j,arreglo[j]);
    }
}
int suma_vecs (int*arreglo,int a){
    for(j=1; j<=a; j++){
        arreglo[j]=arreglo_1[j]+arreglo_2[j];
    }
    for(j=1; j<=a; j++){
        printf("arreglo: [%d] %d\n",j,arreglo[j]);
    }
}
int suma_v1(int*arreglo,int a){
    for(i=1; i<=a ;i++){
        suma=suma+arreglo_1[i];
    }
    printf("%d",suma);
}
int infomatriz(int arre[][100], int b, int c){
    for (i=1; i<=b; i++)
    for (j=1; j<=c; j++){
        printf("Orden [%d][%d]",i,j);
        scanf("%d",&arre[i][j]);
    }
}
int matriz(int arre[][100],int f, int c){
    for (i=1; i<=f; i++){
        printf("\n");
        for (j=1; j<=c; j++)
        printf(" [%d]",arre[i][j]);
        printf("\n");
    }
}
int matriz_col(int arre[][100], int b, int c){
    for (i=1; i<=b; i++){
        printf("\n");
        for(j=1; j<=c; j++){
            arre[i][j]=1+rand()%100;
            printf(" %d",arre[i][j]);
        }
    }
}
int datoa(int arre[][100], int f1, int c1){
for (i=1; i<=f1; i++)
for(j=1; j<=c1; j++){
    printf("Orden:[%d][%d]",i,j);
    scanf("%d",&arre[i][j]);
}
}
int datob(int arre[][100], int f2, int c2){
for (i=1; i<=f2; i++)
for(j=1; j<=c2; j++){
    printf("Orden: [%d][%d]",i,j);
    scanf("%d",&arr_a[i][j]);
}
}
int mat(int arr_b[][100], int f1, int c1){
    int i,j, acumulador,contador;
    for(i=1; i<=f1; i++)
    for(j=1; j<=c1; j++){
        for(acumulador=0, contador=0; contador<=c1; contador++)
        acumulador=acumulador+arre[i][contador]*arr_a[contador][j];
        arr_b[i][j]=acumulador;
    }
    for(i=1; i<=f1; i++){
        printf(" \n");
        for(j=1; j<=f2; j++)
        printf(" %d",arr_b[i][j]);
    }
}
