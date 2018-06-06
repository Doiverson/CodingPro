//
//  main.c
//  Final Exam
//
//  Created by SHOSUKE DOI on 2018-06-01.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct node{
    struct node* from;
    int visited;
    char* name;
    int cost;
    struct Edge* edge;
    struct node* next;
};

struct Edge{
    int dest;
    struct node* from;
    struct node* to;
    struct Edge* next;
};

struct node* head = NULL;
struct node* current = NULL;
struct node* prev = NULL;


int main() {
    int x;
    printf("Enter the number of nodes\n");
    scanf("%d", &x);
    
    for(int i=0; i<x; ++i){
        prev = current;
        current = (struct node*) malloc(sizeof(struct node));

    }
    
    
}
