/*
 ============================================================================
 Name        : Problem6.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;

	printf("Enter the numberA =");
	scanf("%d", &a);
	printf("Enter the numberB =");
	scanf("%d", &b);

	c=a;
	a=b;
	b=c;

	printf("A=%d \n",a);
	printf("B=%d \n",b);
	return 0;
}
