#include<math.h>
#include <stdio.h>

float deriv_delante1(float h, float (xi));
float deriv_atras1(float h, float(xi));
float deriv_centrada1(float h, float (xi));
float deriv_delante2(float h, float (xi));
float deriv_atras2(float h, float(xi));
float deriv_centrada2(float h, float (xi));
float deriv_delante3(float h, float (xi));
float deriv_atras3(float h, float(xi));
float deriv_centrada3(float h, float (xi));
float deriv_delante4(float h, float (xi));
float deriv_atras4(float h, float(xi));
float deriv_centrada4(float h, float (xi));
float err(float (xi), float h);

int main()
{
    int opc ;
    printf("Indique aproximacion de 'h' a calcular:\n");
    printf("1.h=0.5\n2.h=0.2\n3.h=0.1\n4.h=0.01\n ");
    scanf("%d",&opc );
    float xi,h,err;

    switch(opc )
    {
        case 1:
        printf("f(xi) Adelante: %.4f ",deriv_delante1(xi,h));
        err=fabs((0.2489-deriv_delante1(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        printf("\nf(xi) Atras: %.4f ",deriv_atras1(xi,h));
        err=fabs((0.2489-deriv_atras1(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        printf("\nf(xi) Centrada: %.4f ",deriv_centrada1(xi,h));
        err=fabs((0.2489-deriv_centrada1(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        break;
        case 2:
        printf("\nf(xi) Adelante: %.4f ",deriv_delante2(xi,h));
        err=fabs((0.2489-deriv_delante2(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        printf("\nf(xi) Atras: %.4f ",deriv_atras2(xi,h));
        err=fabs((0.2489-deriv_atras2(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        printf("\nf(xi) Centrada:%.4f ",deriv_centrada2(xi,h));
        err=fabs((0.2489-deriv_centrada2(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        break;
        case 3:
        printf("\nf(xi) Adelante: %.4f ",deriv_delante3(xi,h));
        err=fabs((0.2489-deriv_delante3(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        printf("\nf(xi) Atras: %.4f ",deriv_atras3(xi,h));
        err=fabs((0.2489-deriv_atras3(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        printf("\nf(xi) Centrada:%.4f ",deriv_centrada3(xi,h));
        err=fabs((0.2489-deriv_centrada3(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        break;
        case 4:
        printf("\nf(xi) Adelante %.4f ",deriv_delante4(xi,h));
        err=fabs((0.2489-deriv_delante4(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        printf("\nf(xi) Atras: %.4f ",deriv_atras4(xi,h));
        err=fabs((0.2489-deriv_atras4(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        printf("\nf(xi) Centrada:%.4f ",deriv_centrada4(xi,h));
        err=fabs((0.2489-deriv_centrada4(xi,h))/0.2489)*100;
        printf("\nError Relativo= %.4f ",err);
        break;
    }
}
float deriv_delante1(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.5;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;

}
float deriv_atras1(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;

}
float deriv_centrada1(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.5;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
float deriv_delante2(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.2;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;

}
float deriv_atras2(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;

}
float deriv_centrada2(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.2;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
float deriv_delante3(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.1;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;

}
float deriv_atras3(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;

}
float deriv_centrada3(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.1;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
float deriv_delante4(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.01;
    fxi=1-exp(-xi/0.2);
    aprox1=1-exp(-(xi+h)/0.2);
    aprox2=1-exp(-(xi+(2*h))/0.2);
    deriv=(-aprox2+4*aprox1-3*fxi)/(2*h);
    return deriv;

}
float deriv_atras4(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi-h)/0.2);
    aprox2 = 1-exp(-(xi-(2*h))/0.2);
    deriv= (3*fxi-4*aprox1+aprox2)/(2*h);
    return deriv;

}
float deriv_centrada4(float h, float (xi)){
    float fxi, aprox1, aprox2,deriv, aprox3, aprox4;
    xi=0.6;
    h=0.01;
    fxi = 1-exp(-xi/0.2);
    aprox1 = 1-exp(-(xi+h)/0.2);
    aprox2 = 1-exp(-(xi+(2*h))/0.2);
    aprox3= 1-exp(-(xi-h)/0.2);
    aprox4 = 1-exp(-(xi-(2*h))/0.2);
    deriv = (-aprox2+8*aprox1-8*aprox3+aprox4)/(12*h);
    return deriv;
}
