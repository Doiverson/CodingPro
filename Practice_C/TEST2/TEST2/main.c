//
//  main.c
//  TEST2
//
//  Created by SHOSUKE DOI on 2018-06-05.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void ShowEach(char*a){
    printf("%s\n", a);
    char *EachNum = strtok(a,"_");
    while(EachNum!=NULL){
    printf("%s\n", EachNum);
        EachNum=strtok(NULL, "_");
        
    }
        }

int main() {
    char str[] = "A_B_10,A_F_6,B_C_6,C_B_10,D_A_3,E_B_5,F_B_10,G_G_0";
    
    char *token = strtok(str, ",");

    while (token != NULL)
    {
        ShowEach(token);
        token = strtok(NULL, ",");
    }
    
}
