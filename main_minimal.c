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
double logn(double x){
	double x_cuad = x * x;
	double retorno = c0*x;
	double x_2nplus1=x * x_cuad;
	retorno += c1 * x_2nplus1;
  x_2nplus1 *= x_cuad;
	retorno += c2 * x_2nplus1;
	x_2nplus1 *= x_cuad;
	retorno += c3 * x_2nplus1;
	x_2nplus1 *= x_cuad;
	retorno += c4 * x_2nplus1;
	x_2nplus1 *= x_cuad;
	retorno += c5 * x_2nplus1;
	x_2nplus1 *= x_cuad;
	retorno += c6 * x_2nplus1;
	x_2nplus1 *= x_cuad;
	retorno += c7 * x_2nplus1;
	x_2nplus1 *= x_cuad;
	retorno += c8 * x_2nplus1;
	x_2nplus1 *= x_cuad;
	retorno += c9 * x_2nplus1;
	return 2* retorno;
}

int main(void) {
int iteraciones = 1;
int x = 400;	//el valor de entrada
double num = x-1;
double den = x+1;
double frac = num /den;
double resultado;

int i;
for(i = 0; i < iteraciones; i++){
resultado = logn(frac);
}

printf("minimal-version");
printf("num es: %f\n", num);
printf("den es: %f\n", den);
printf("fraccion es: %f\n", frac);
printf("%f\n", resultado);

return 0;
}
