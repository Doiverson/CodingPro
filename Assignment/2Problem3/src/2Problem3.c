/*
 ============================================================================
 Name        : 2Problem3.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void aveNum(float sum, float countNum){
	float ave = 0;
	ave = sum/countNum;
	printf("======================= \n");
	printf("Ave = %f", ave);
}

void get_Numbers(int a, int b){

	int i = 0;
	float sum, countNum = 0;

	printf("The numbers between inputs are \n");

	for(i=i+a; i<=b; ++i ){
		printf("%d \n", i);
		sum = sum+i;
		countNum = countNum + 1;
	}
	printf("======================= \n");
	printf("Sum = %f\n", sum);
	printf("======================= \n");
	printf("Count of Numbers = %f\n", countNum);

	aveNum(sum, countNum);
}

int main(void) {

	int a,b;
	printf("Enter natural number");
	scanf("%d", &a);
	printf("Enter natural number");
	scanf("%d", &b);

	printf("======================= \n");
	get_Numbers(a,b);
}

