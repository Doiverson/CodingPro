//
//  main.c
//  Practice7_3
//
//  Created by SHOSUKE DOI on 2018-05-25.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>

void BigNum(int* a, int len){
    int Max = a[0];
    for(int i=0; i<len; i++){
        if(a[i]>Max){
            Max = a[i];
        }
    }
    printf("Biggest number = %d \n", Max);
}

void MinNum(int* a, int len){
    int Min = a[0];
    for(int i=0; i<len; i++){
        if(a[i]<Min){
            Min = a[i];
        }
    }
    printf("Minimum number = %d \n", Min);
}

void AveNum(int* a, int len){
    int Ave = 0;
    int Total = 0;
    for(int i=0; i<len; i++){
        Total= Total + a[i];
    }
    Ave = Total/(len - 1);
    printf("Ave = %d \n", Ave);
}

void SumNum(int* num, int len){
    int Total = 0;
    for(int i=0; i<len; i++){
    Total= Total + num[i];
    
    }
    printf("Total = %d \n", Total);
    
}

void ShowNum(int* a){
        for(int i=0; i<5; i++){
        printf("[%d] = %d \n", i, a[i]);
        }
}

int main(void){
    
    int a[100];
    int i = 0;
    
    for(i=0; i<5; i++){
        printf("[%d]Enter the number = ", i);
        scanf("%d", &a[i]);
    }
    
    char button[] = {'p','c','v','m','x','q','n'};
    char x;
    
    printf("<p> -> Show Numbers\n");
    printf("<c> -> Show Total\n");
    printf("<v> -> Show Average\n");
    printf("<m> -> Show Smallest Number\n");
    printf("<x> -> Show Largest Number\n");
    printf("<n> -> Copy Numbers\n");
    printf("<q> -> Exit\n");
    
    do{
    printf("-------------------------- \n");
    printf("Enter the command = ");
    scanf("%*c%c", &x);
    
    if(x==button[0]){
        ShowNum(a);
    } else if(x==button[1]) {
        SumNum(a, i);
    } else if(x==button[2]){
        AveNum(a, i);
    } else if(x==button[3]){
        MinNum(a ,i);
    } else if(x==button[4]){
        BigNum(a ,i);
    } else if(x==button[5]){
        return 0;
    } else if(x==button[6]){
        for(i=0; i<5; i++){
            int b[100];
            b[i]=a[i];
            printf("b [%d]=%d\n", i,b[i]);
        }
    }
    } while(x!= 'q');
}
