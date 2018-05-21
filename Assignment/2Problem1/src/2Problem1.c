/*
 ============================================================================
 Name        : 2Problem1.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int factorial_a(int a){
	int i = 1;
	while(a>1){
		i = i*a;
		a--;
	}
	return i;
}

int factorial_b(int b){
	int j = 1;
	while(b>1){
			j = j*b;
			b--;
		}
	return j;
}

int factorial_c(int f){
	int k = 1;
	while(f>1){
			k = k*f;
			f--;
		}
	return k;
}

void main(void) {
	float a,b,c,d,g;
	printf("Enter the number");
	scanf("%f", &a);
	printf("Enter the number");
	scanf("%f", &b);

	c =factorial_a(a);
	d =factorial_b(b);

	printf("Factorial A is %f \n",c);
	printf("Factorial B is %f \n",d);

	float f= a+b;
	g =factorial_c(f);

	printf("Factorial A+B is %f \n",g);

	float resultNumber = c/(g*d);

	printf("a!/ ((a+b)!*b!) is %f",resultNumber);
}

