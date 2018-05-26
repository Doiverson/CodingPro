//
//  main.c
//  Problem3_3
//
//  Created by SHOSUKE DOI on 2018-05-24.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>

int main(void){
    float a[100];
    int i;
    
    for(i=0; i<5; i++){
        printf("Enter the number = ");
        scanf("%f", &a[i]);
    }
    
    printf("<Returned Array> \n");

    
    for(i=0; i<5; i++){
        b[i]=a[i];
        printf("b [%d]=%d\n", i,b[i]);
    }
    return 0;
}
