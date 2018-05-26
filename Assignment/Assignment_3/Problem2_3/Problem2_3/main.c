//
//  main.c
//  Problem2_3
//
//  Created by SHOSUKE DOI on 2018-05-24.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>


    int main(void){
        char a[100];
        int i;
        int len;
        printf("Enter String\n");
        scanf("%s",a);
        
        len=strlen(a);
        
        for(i=len-1;i>=0;i--){
            printf("%c",a[i]);
        }
        printf("\n");
        return 0;
    
}

