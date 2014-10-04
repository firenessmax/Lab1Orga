#include <stdio.h>
double c0 = 1.0;
double c1 = 0.3333333333333333;
double c2 = 0.2;
double c3 = 0.14285714285714285;
double c4 = 0.1111111111111111;
double c5 = 0.09090909090909091;
double c6 = 0.07692307692307693;
double c7 = 0.06666666666666667;
double c8 = 0.058823529411764705;
double c9 = 0.05263157894736842;
double c10 = 0.047619047619047616;
double c11 = 0.043478260869565216;
double c12 = 0.04;
double c13 = 0.037037037037037035;
double c14 = 0.034482758620689655;
double c15 = 0.03225806451612903;
double c16 = 0.030303030303030304;
double c17 = 0.02857142857142857;
double c18 = 0.02702702702702703;
double c19 = 0.02564102564102564;
double logn(double x){
    return 2* (c0 * x
               + c1 * x
               * x * x
               + c2 * x
               * x * x * x * x
               + c3 * x
               * x * x * x * x * x * x
               + c4 * x
               * x * x * x * x * x * x * x * x
               + c5 * x
               * x * x * x * x * x * x * x * x * x * x
               + c6 * x
               * x * x * x * x * x * x * x * x * x * x * x * x
               + c7 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c8 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c9 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c10 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c11 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c12 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c13 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c14 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c15 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c16 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c17 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c18 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               + c19 * x
               * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x
               );
}
int main(int argc, char *argv[]) {

int iteraciones = 1000000;
double x;	//el valor de entrada
sscanf(argv[1],"%lf",&x);
double num = x-1;
double den = x+1;
double frac = num /den;
double resultado;

int i;
for(i = 0; i < iteraciones; i++){
resultado = logn(frac);
}


printf("num es: %f\n", num);
printf("den es: %f\n", den);
printf("fraccion es: %f\n", frac);
printf("%f\n", resultado);

return 0;
}
