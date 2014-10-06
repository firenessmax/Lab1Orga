#include <stdio.h>
#include <getopt.h>
#include <stdlib.h>

const char* nombre_programa;

void print_usage ()
{
    printf("Uso:  opciones [ argumentos ...]\n");
    printf("    -h  --help                  Enseña esta ayuda\n"
           "    -c  --calcular              Calcula el logaritmo natural\n");
}

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
  return 2* (c0 * (x-1)/(x+1)
               + c1 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1)
               + c2 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c3 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c4 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c5 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c6 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c7 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c8 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c9 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c10 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c11 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c12 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c13 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c14 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c15 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c16 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c17 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c18 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * x(x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               + c19 * (x-1)/(x+1)
               * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1) * (x-1)/(x+1)
               );
}


int main() {
      double x;	//el valor de entrada
      int iteraciones = 1000000;
      int i;
      double resultado;

      for(i = 0; i < iteraciones; i++){
        resultado = logn(x);
      }

      printf("El resultado es : %f\n", resultado);

      return 0;
}
