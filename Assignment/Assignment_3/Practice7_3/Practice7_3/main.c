//
//  main.c
//  Practice7_3
//
//  Created by SHOSUKE DOI on 2018-05-25.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>

void BigMinNum(int* num, int len){
    int Max = num[0];
    int Min = num[0];
    for(int i=0; i<len; i++){
        if(num[i]>Max){
            Max = num[i];
        }
        if(num[i]<Min){
            Min = num[i];
        }
    }
    
    printf("Biggest number = %d \n", Max);
    printf("Minimum number = %d \n", Min);
}

void AveNum(int Total, int len){
    int Ave = 0;
    Ave = Total/(len - 1);
    printf("Ave = %d \n", Ave);
}

void SumNum(int* num, int len){
    int Total = 0;
    for(int i=0; i<len; i++){
    Total= Total + num[i];
    
    }
    printf("Total = %d \n", Total);
    AveNum(Total, len);
    BigMinNum(num, len);
    
}

void ShowNum(int* a){
        for(int i=0; i<5; i++){
        printf("[%d]Enter the number = ", a[i]);
}

int main(){
    
    int a[100];
    int i;
    
    for(int i=0; i<5; i++){
        printf("[%d]Enter the number = ", i);
        scanf("%d", &a[i]);
    }
    
    char button[] = {'p','c','v','m','x','q','n'};
    char x;
    printf("Enter the command");
    scanf("%s", &x);
    if(x==button[0]){
        ShowNum(a);
    } else if(x==button[1]) {
        SumNum(a,i);
    } else if(x==button[2]){
        AveNum();
    }
    
    
    
    return 0;
}
