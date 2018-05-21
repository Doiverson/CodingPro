/*
 ============================================================================
 Name        : 2Problem7.c
 Author      : Sho
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void PrimeNumber(int a){

	int flag=0;
	for(int i=2; i<a; ++i){
		if(a%i==0){
		flag=1;
		break;
		}
	}
		if(flag==0)
			printf("4:%d is prime number \n", a);
		else
			printf("4:%d is NOT prime number \n", a);
}

void Dividend2(int a){
	if(a%7==0){
			printf("3:The number is dividend of 7\n");
		}
		else{
			printf("3:The number is NOT dividend of 7\n");
		}

	PrimeNumber(a);
}

void Dividend(int a){
	if(a%3==0){
			printf("2:The number is dividend of 3\n");
		}
		else{
			printf("2:The number is NOT dividend of 3\n");
		}

	Dividend2(a);
}

void OddEven(int a){

	if(a%2==0){
		printf("1:The number is EVEN\n");
	}
	else{
		printf("1:The number is ODD\n");
	}

	Dividend(a);
}

void main(void) {

	int a;
	printf("Enter the number =");
	scanf("%d", &a);

	OddEven(a);
}
