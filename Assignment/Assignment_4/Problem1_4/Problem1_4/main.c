//
//  main.c
//  Problem1_4
//
//  Created by SHOSUKE DOI on 2018-05-26.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct machine {
    int name;
    char *memory;
};

int main(void){
    
    struct date *dates;
    struct date a;
    
    dates = &a;
    dates -> day = 10;
    printf("%d \n", dates->day);       // For check
    
    
    struct machine *mpu641;
    struct machine b;
    
    mpu641 = &b;
    char array[] = "CPUtype";
    mpu641 -> memory =array;
    printf("%s \n", mpu641->memory);   // For check
}
