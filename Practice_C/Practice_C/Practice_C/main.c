//
//  main.c
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
    struct seiseki seito1 = {5, "Justin Bieber", 83.5};
    struct seiseki seito2[20] = {
        {1, "Drake", 78.6},
        {2, "Taylor Swift", 57.3},
        {3, "Bruno Mars", 66.4},
    };
    
    printf("%d %s %5.1f\n\n", seito1.no, seito1.name, seito1.average);
    for(i=0; i<3; i++){
        printf("%d %s %5.1f\n", seito2[i].no, seito2[i].name, seito2[i].average);
    }
    
    return 0;
}

