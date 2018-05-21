/*
 ============================================================================
 Name        : Problem4.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sum= 0;
	int num;
	while(num!=0){
		printf("Enter the number");
		scanf("%d", &num);
		sum+=num;
	}
	printf("%d\n", sum);
	return 0;
}
