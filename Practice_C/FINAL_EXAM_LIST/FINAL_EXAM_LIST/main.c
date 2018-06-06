//
//  main.c
//  FINAL_EXAM_LIST
//
//  Created by SHOSUKE DOI on 2018-06-05.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    char input[] = "A_B_10,A_F_6,B_C_6,C_B_10,D_A_3,E_B_5,F_B_10,G_G_0";
    char *Each;
    
    Each=strtok(input,"_,");
    
    while(Each!=NULL){
        printf("Split:%s\n", Each);
        Each=strtok(NULL,"_,");
    }

}
