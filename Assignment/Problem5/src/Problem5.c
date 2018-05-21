/*
 ============================================================================
 Name        : Problem5.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	int num;
	int dig;
	int sum = 0;

	printf("Enter natural number");
	scanf("%d", &num);

	while(num) {
		dig = num % 10;
		sum=sum+dig;
		num=num/10;
	}
	printf("%d\n", sum);
	return 0;
}
