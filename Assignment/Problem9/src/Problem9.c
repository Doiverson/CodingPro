/*
 ============================================================================
 Name        : Problem9.c
 Author      : Sho
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int a,b;


	printf("Enter the number=");
	scanf("%d", &a);
	printf("Enter power of number =");
	scanf("%d", &b);

	int i = b;
	int answer = 1;
	while(i!=0){
		answer = answer*a;
		--i;
	}
	printf("Answer is %D", answer);
}
