//
//  main.c
//  Problem1_4
//
//  Created by SHOSUKE DOI on 2018-05-26.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>

int main() {
    char button[] = {'p','c','v','m','x','q','n'};
    printf("%c \n", button[1]);
    
    char x;
    printf("Enter the command = ");
    scanf("%c", &x );
    printf("%c", x);
}
