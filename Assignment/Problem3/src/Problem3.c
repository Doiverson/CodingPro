/*
 ============================================================================
 Name        : Problem3.c
 Author      : SHO
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	int number;
	int flag = 0;

	printf("Enter the number");
	scanf("%d", &number);

	for(i=2; i<number; ++i)
	{
		if(number%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0 && number!=0)
		printf("%d is true \n", number);
	else
		printf("%d is false \n", number);
	return 0;
	}
