/*
 ============================================================================
 Name        : 2Problem4.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void PrintStar (int numberOfStars)
{
	for(int i=0; i<numberOfStars; i=i+1){
	printf("*");
	}
 printf("\n");
}

void PrintShape(int numberOfStars){
	for(int i=numberOfStars; i>0; i=i-1){
		PrintStar(i);
	}

}

int main(void) {
	int c = 0;
	printf("Enter Number \n");
	scanf("%d", &c);
	PrintShape(c);
}
