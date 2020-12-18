#include <stdio.h>
#include <math.h>
int i;
int metodo;
int iteracion;
float valor_actual, valor_analitico, a,b;
float funcion1(float num),funcion2(float num), error_relativo(float valor_actual,float valor_analitico);
float medio(float a, float b), fp1(float a, float b), fp2(float a, float b);

float error_relativo(float valor_actual, float valor_analitico){
    float error;
    error= fabs((valor_analitico-valor_actual)/valor_analitico)*100;
    return error;
}
float funcion1(float num){
    float fx;
    fx= (2*(num)*cos(2*num))-pow((num+1),2);
    return fx;
}
float funcion2(float num){
    float fx;
    fx= log(fabs(num))+pow(num,2)-4;
    return fx;
}
float fp1(float a, float b){
    float xi;
    xi=b-((funcion1(b)*(a-b))/(funcion1(a)-funcion1(b)));
    return xi;
}
float fp2(float a, float b){
    float xi;
    xi= b-((funcion2(b)*(a-b))/(funcion2(a)-funcion2(b)));
    return xi;
}
float medio (float a, float b){
    float xi;
    xi=((a+b)/2);
    return xi;
}

 int main()
 {
 printf("Indicar el metodo que desea resolver\n ");
 printf("1.Falsa posición           2.Bisección\n");
 scanf("%d",&metodo);
    switch(metodo){
        case 1:
        printf("Indique numero de iteraciones: ");
        scanf("%d",&iteracion);
        printf("\n");
        a=-3;
        b=-2;
        valor_analitico=0;
        valor_actual=0;
        printf("                                                  Trigonometrica                          \n");
        printf("    i               xi               a                b             Error             f(a)                 f(b)\n");
        for(i=1; i<=iteracion; i++){
            printf("    [%d]        [%f]      [%f]      [%f]     [%f]       [%f]         [%f]\n",i,fp1(a,b),a,b,error_relativo(valor_actual,valor_analitico),funcion1(a),funcion1(b));
            if((funcion1(a)*funcion1(fp1(a,b)))<0){
                b=fp1(a,b);
                valor_actual=b;
                valor_analitico=fp1(a,valor_actual);
            }
            else{
                a=fp1(a,b);
                valor_actual=a;
                valor_analitico=fp1(valor_actual,b);
        }
        printf("\n");
        printf("                                                 Logaritmica                        \n  ");
        printf("\n");
        a=1;
        b=2;
        valor_analitico=0;
        valor_actual=0;
        printf("    i           xi               a              b                 E              f(a)           f(b)\n\n");
        for(i=1; i<=iteracion; i++){
        printf("    [%d]      [%f]     [%f]      [%f]          [%f]          [%f]      [%f]\n",i,fp2(a,b),a,b,error_relativo(valor_actual,valor_analitico),funcion2(a),funcion2(b));
        if((funcion2(a)*funcion2(fp2(a,b)))<0){
            b=fp2(a,b);
            valor_actual=b;
            valor_analitico=fp2(a,valor_actual);
        }
        else{
            a=fp2(a,b);
            valor_actual=a;
            valor_analitico=fp2(valor_actual,b);

        }
        }
        break;
        case 2:
        printf("Indique numero de iteraciones: ");
        scanf("%d",&iteracion);
        printf("\n");
        printf("\n");
        a=-3;
        b=-2;
        valor_analitico=0;
        valor_actual=0;
        printf("                          Trigonomtrica                                       \n ");

        printf(" i             xi              a               b             Error\n");
        for(i=1; i<=iteracion; i++){
            printf("[%d]       [%f]      [%f]     [%f]      [%f]    \n",i,medio(a,b),a,b,error_relativo(valor_actual,valor_analitico));
            if((funcion1(a)*funcion1(medio(a,b)))<0){
                b=medio(a,b);
                valor_actual=b;
                valor_analitico=medio(a,valor_actual);
            }
            else{
                a=medio(a,b);
                valor_actual=a;
                valor_analitico=medio(valor_actual,b);
            }
        }
        printf("\n");
        printf("                         Logaritmica                     \n");
        a=1;
        b=2;
        valor_analitico=0;
        valor_actual=0;
        printf("i              xi               a              b              Error\n");
        for(i=1; i<=iteracion; i++){
            printf("[%d]       [%f]      [%f]     [%f]        [%f]  \n",i,medio(a,b),a,b,error_relativo(valor_actual,valor_analitico));
            if((funcion2(a)*funcion2(medio(a,b)))<0){
                b=medio(a,b);
                valor_actual=b;
                valor_analitico=medio(a,valor_actual);
            }
            else{
                a=medio(a,b);
                valor_actual=a;
                valor_analitico=medio(valor_actual,b);
            }
        }
        printf("");
        break;
    }
 }
}
