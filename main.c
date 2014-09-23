#include <stdio.h>
 
double c0 = 1;
double c1 = 0.333333333333333;	// 1/3
double c2 = 0.2;	// 1/5
double c3 = 0.1428571428571430;	// 1/7
double c4 = 0.111111111111111111;	// 1/9
double c5 = 0.0909090909090909;	// 1/11
double c6 = 0.0769230769230769;	// 1/13
double c7 = 0.0666666666666666;	// 1/15
 
double logn(double x){
return 2* (c0 * x
+ c1 * x * x * x
+ c2 * x * x * x * x * x
+ c3 * x * x * x * x * x * x * x
+ c4 * x * x * x * x * x * x * x * x * x
+ c5 * x * x * x * x * x * x * x * x * x * x * x
+ c6 * x * x * x * x * x * x * x * x * x * x * x * x * x
+ c7 * x * x * x * x * x * x * x * x * x * x * x * x * x * x * x);
}
 
 
int main(void) {
int iteraciones = 100000000;
int x = 100;	//el valor de entrada
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
