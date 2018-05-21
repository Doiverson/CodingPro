/*
 ============================================================================
 Name        : Problem7.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
		int i,j,k;
		int number;

		printf("Enter the number");
		scanf("%d", &number);

		for(i=number+1; i>0; ++i){
			k=0;
			for(j=1; j<=i; ++j){
				if(i%j==0)
				k++;
			}
			if(k==2){
			printf("%d\n", i);
			break;
			}
		}
		return 0;
}
