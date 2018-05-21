/*
 ============================================================================
 Name        : 2Problem2.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void CircleArea(int r,int c){
	float z = M_PI*r*r;

	float ResultA = (float)c/z;
	printf("Answer is %f",ResultA);
}

void RectangleArea(int a, int b, int r){
	int c = a*b;

	CircleArea(r,c);
}

void main(void) {
	int a,b,r;
	printf("Enter length of rectangle=");
	scanf("%d",&a);
	printf("Enter width of rectangle=");
	scanf("%d",&b);
	printf("Enter radius of circle=");
	scanf("%d",&r);

	RectangleArea(a,b,r);
}
