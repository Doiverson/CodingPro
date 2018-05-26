//
//  main.c
//  Practice6_3
//
//  Created by SHOSUKE DOI on 2018-05-25.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>

void searchNum(int* a, int len){
    int num;
    printf("Enter the number to be serched = ");
    scanf("%d", &num);
    
    int i = 0;
    while(i<len && num !=a[i]){
        i++;
    }
    
    if(i<len){
        printf("Index of number  = [%d] \n", i);
    }
    else{
        printf("-1 \n");
    }
    
}


int main(){
    
    int a[100];
    int i;
    
    for(i=0; i<5; i++){
        printf("[%d]Enter the number = ", i);
        scanf("%d", &a[i]);
    }

    searchNum (a,i);
    return 0;
}


