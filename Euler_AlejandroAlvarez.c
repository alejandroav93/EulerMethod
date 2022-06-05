#include<stdio.h>
#include<math.h>
/*
Compilacion del programa:
Metodo GCC
gcc Euler_AlejandroAlvarez.c -o euler

Metodo Makefile
make Makefile all

Ejecucion
./euler
*/

/*
Comprobacion en WolframAlpha usando sintaxis:

use Euler method y' = x+y, y(0) = 1, from 0 to 0.3, h = 0.1
*/

/*
Ingresar ecuacion diferencial: 
dx/dy = x+y  
dx/dy = -2*x+6*y
*/
double equation(double x, double y){
    return x+y;  
}
main(){
    /*
    i = contador de pasos/iteraciones
    xinicialnicial = valor inicial de x
    yinicial = valor inicial de y
    xfinalinal = valor final de x
    steps = tamano/ancho del paso
    */
    int i=0;
    double y,xinicial,yinicial,xfinal,steps;
    printf("********************************************************\n");
    printf("*Universidad del Valle de Guatemala                    *\n");
    printf("*Ecuaciones Diferenciales                              *\n");
    printf("*                                                      *\n");
    printf("*Alejandro Alvarez                                     *\n");
    printf("*Carnet 12429                                          *\n");
    printf("*                                                      *\n");
    printf("*               EULER POR METODO DE TABLA              *\n");
    printf("********************************************************\n");
    printf("Ingresar Condiciones iniciales\n");
    printf("Ingrese y(0):");
    scanf("%lf",&yinicial);
    printf("Ingrese x(0):");
    scanf("%lf",&xinicial);
    printf("Ingrese valor final de x:");
    scanf("%lf",&xfinal);
    printf("Ingrese el tamaño del paso (step-size [H]):");
    scanf("%lf",&steps);
    printf("x\t\ty\t\tf(x)'\t\thf(x)'\t\ty+hf(x)'\n");
    printf("__________________________________________________________________________\n");
    /*
    Ciclo while para Euler
    */
    while(xinicial<=xfinal){ // Mientras x < valor final de x ingresado hacer....
        i++;
        y=yinicial+steps*equation(xinicial,yinicial);
        printf("%lf\t%lf\t%lf\t%lf\t%lf\n",xinicial,yinicial,equation(xinicial,yinicial),steps*equation(xinicial,yinicial),y);
        yinicial=y;
        xinicial=xinicial+steps;
        
    }
    printf("%lf\t%lf\n",xinicial,yinicial);
    printf("__________________________________________________________________________\n");
    /*
    Resultado final de Euler
    */
    printf("El numero de iteraciones (pasos) fue de: %i\n",i);
    printf("El valor de y es: %lf\n\n",y);
}