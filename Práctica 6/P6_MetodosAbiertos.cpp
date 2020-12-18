#include <stdio.h>
#include <math.h>
float error_abs(float x1,float x0)
{
float error_aprox;
error_aprox= (x1-x0)/x1;
if (error_aprox<0)       error_aprox=-error_aprox;
return error_aprox*100;
}
 float derivf1(float x)
{
return -8*sin(x)*exp(-x)+8*cos(x)*exp(-x); }
float funcion2(float x)
{
return 2*x*x*x -11*x*x+17.7*x-5;
}
float derivf2(float x)
{
return 6*x*x-22*x+17.7;
}
float fn1(float x)
{
return 8*sin(x)*exp(-x)-1;
}
void Metodo_NRaphson()
{
float x0,x1;
int i=0,imax;
float error_aprox=100;
float error;
printf("Metodo Newton Raphson\n\n");
printf("Indique valor de x0 :  ");
scanf("%f",&x0);    //0
printf("Indique valor de error:  ");
scanf("%f",&error);   //0.001
printf("Indique numero de iteraciones:  ");
scanf("%d",&imax);      //10
printf("\n i       xi          Error Aproximado\n");
printf(" %d     %f \n",i,x0);
while  ((error_aprox>error)&&(i<imax))
{
x1=x0-funcion2(x0)/derivf2(x0);   //Newton Raphson
error_aprox=error_abs(x1,x0);
i=i+1;
printf(" %d       %f      %f \n",i,x1,error_aprox);               x0=x1;
 }
  }
void Metodo_Secante()
{
float x0,x1,x2;
float error,error_aprox=100;
int imax,i=0;
float df;
printf("\n");
printf("Metodo Secante\n\n");
printf("Indique valor de x0 :   ");
scanf("%f",&x0);
printf("Indique valor de x1:   ");
scanf("%f",&x1);
printf("Indique valor de error:  ");
scanf("%f",&error);
printf("Indique maximo de iteraciones: ");
scanf("%d",&imax);
printf("\n");
printf("i    xi      xi+1       f'(xi)     Error Aproximado\n");
printf("%d %f  %f   \n",0,x0,x1);
while ((error_aprox>error)&&(i<imax))
{
df= (funcion2(x0)-funcion2(x1))/(x0-x1);
x2=x1-funcion2(x1)*(x0-x1)/(funcion2(x0)-funcion2(x1));   //Secante
error_aprox=error_abs(x2,x1);
i=i+1;
printf("%d %f  %f   %f  %f \n",i,x1,x2,df,error_aprox);                  x0=x1;
x1=x2;
}
}
int main()
{
Metodo_NRaphson();
Metodo_Secante();
return 0;
}
