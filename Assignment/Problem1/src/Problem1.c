/*
 ============================================================================
 Name        : Problem1.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;

	printf("Enter the number");
	scanf("%d", &a);
	printf("Enter the number");
	scanf("%d", &b);

	printf("%d \n", a+b);
	printf("%d \n", a-b);
	printf("%d \n", a*b);

	if(a==0 || b==0)
		return 0;

	else
		printf("%d \n", a/b);
		return 0;
}
