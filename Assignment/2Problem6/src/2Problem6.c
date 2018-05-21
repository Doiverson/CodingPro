/*
 ============================================================================
 Name        : 2Problem6.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void primeNumber(int num1,int num2){
	int flag;
	printf("Prime numbers between input numbers are\n");
	printf("=======================\n");


	for(int i=num1;i<=num2;++i ) {
	    flag = 0;
	    for(int j=2;j<i;++j ){
	      if( i%j==0 ) {
	        flag = 1;
	        break;
	      }
	    }
	    if( flag==0 && i!=1 )
	      printf("%d ", i);
	  }

	  printf("\n");
}

void main(void){
	int a, b;

  printf("Enter the number =");
  scanf("%d", &a);
  printf("Enter the number =");
  scanf("%d", &b);

  primeNumber(a,b);

}
