//
//  main.c
//  Problem4_3
//
//  Created by SHOSUKE DOI on 2018-05-24.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>

void diff_num(float a, float b){
    float c;
    c = a-b;
    
    printf("Difference between %f and %f = %f\n", a,b,c);
}

int main(){

    float a[100];
    int i;

    for(i=0; i<5; i++){
        printf("Enter the float number = ");
        scanf("%f", &a[i]);
    }
    
    float Min = a[0];
    float Max = a[0];
    
    for(i=0; i<5; i++){
        printf("Array[%d]: %f \n", i, a[i]);
        if(a[i]<Min)
            Min = a[i];
        if(a[i]>Max)
            Max = a[i];
    }
    
    printf("Max = %f\n", Max);
    printf("Min = %f\n", Min);
    
    diff_num(Max, Min);
    
    return 0;
}
