//
//  main.c
//  Problem5_3
//
//  Created by SHOSUKE DOI on 2018-05-24.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>


int main(){
    
    int a[100];
    int i;
    
    for(i=0; i<5; i++){
        printf("Enter the float number = ");
        scanf("%d", &a[i]);
    }
    
    int Odd = 0;
    int Even = 0;
    
    for(i=0; i<5; i++){
        if(a[i]%2 == 0)
            Even++;
        else
            Odd++;
    }
    
    printf("Even = %d\n", Even);
    printf("Odd = %d\n", Odd);
    
    return 0;
}

