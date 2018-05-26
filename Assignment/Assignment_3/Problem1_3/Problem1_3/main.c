//
//  main.c
//  Problem1_3
//
//  Created by SHOSUKE DOI on 2018-05-24.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>

int main(void) {
    int i,array[ 100];
    for(i=0; i<5; i++){
        printf("Enter the number = ");
        scanf("%d", &array[i]);
    }
    
    printf("<Stored Number>\n");
    
    for(i=0; i<5; i++){
        printf("Array[%d]: %d \n", i, array[i]);
    }
    
    return 0;
}
