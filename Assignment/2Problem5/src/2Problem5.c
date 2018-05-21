/*
 ============================================================================
 Name        : 2Problem5.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void swapNumber(int* a,int* b){

    int c = *a;
	*a=*b;
	*b=c;

	printf("Result after swapping is\n");
	printf("=======================\n");

	printf("A=%d \n",*a);
	printf("B=%d \n",*b);
}

void main(void) {
	int a,b;

	printf("Enter the numberA =");
	scanf("%d", &a);
	printf("Enter the numberB =");
	scanf("%d", &b);

	swapNumber(&a,&b);
}
