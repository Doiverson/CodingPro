//
//  Practice_C_Pointer.c
//  Practice_C
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
    
    scanf("%d", &seito1.no);
    scanf("%s", seito1.name);
    scanf("%lf", &seito1.average);
    
    for(i=0; i<3; i++){
        scanf("%d", &seito2[i].no);
        scanf("%s", seito2[i].name);
        scanf("%lf", &seito2[i].average);
    }
    
    printf("no:%d name:%s average:%f\n", seito1.no, seito1.name, seito1.average);
    for(i=0; i<3; i++){
        printf("no:%d name:%s average:%f\n", seito2[i].no, seito2[i].name, seito2[i].average);
    }
    return 0;
}
