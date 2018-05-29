//
//  main.c
//  Practice_C_Input
//
//  Created by SHOSUKE DOI on 2018-05-23.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>

struct seiseki {
    int no;
    char name[20];
    double average;
};

int main(void){
    int i;
    struct seiseki seito1, seito2[20];
    
    printf("Enter your ID Number");
    scanf("%d", &seito1.no);
    printf("Enter your Name");
    scanf("%s", &seito1.name);
    printf("Average score");
    scanf("%lf", &seito1.average);
    
    for(i=0; i<3; i++){
        
        printf("Enter your ID Number");
        scanf("%d", &seito2[i].no);
        printf("Enter your Name");
        scanf("%s", &seito2[i].name);
        printf("Average score");
        scanf("%lf", &seito2[i].average);
    }
    
    printf("no:%d name:%s average:%f\n", seito1.no, seito1.name, seito1.average);
    for(i=0; i<3; i++){
        printf("no:%d name:%s average:%f\n", seito2[i].no, seito2[i].name, seito2[i].average);
    }
    return 0;
}

