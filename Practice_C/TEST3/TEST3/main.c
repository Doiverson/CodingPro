//
//  main.c
//  TEST3
//
//  Created by SHOSUKE DOI on 2018-06-05.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INF 3200

//Define Types of Date Structure

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

//Declare Struct Variables

struct node* head = NULL;
struct node* current = NULL;
struct node* prev = NULL;
struct node* p;


int main() {
    int x;
    printf("Enter the number of nodes\n");
    scanf("%d", &x);
 
    //Split Inputs
    
    int i=0, c=0;
    char source = “A”;
    char  destination[] = "F";
    char getNodes[50] = {“A”,“B”,“C”,“D”,“E”,“F”,“G”};
    int e = getNumberOfEdges();
    int n = getNumberOfNodes();
    char first[10] = {“A”,“A”,“B”,“B”,“C”,“D”,“D”,“E”,“E”};
    char second[10] = {“B”,“C”,“C”,“D”,“E”,“E”,“F”,“B”,“F”};
    int value[10] = {1,2,4,5,3,2,4,2,6};
 
    //Create Linked List
    
    for(int i=0; i<x; ++i){
        head = current;
        current = (struct node*) malloc(sizeof(struct node));
        if(i==0){
            head = current;
            current->from = NULL;
            current->visited = 0;
            current->name = getNodes[i];
            current->cost = 0;
            current->edge = NULL;
            current->next = NULL;
            prev->next = current;
        } else {
            current->next =(struct node*) malloc(sizeof(struct node));
            current = current->next;
        }
        
        current->next = NULL;
    }
    
    //Add Edges
    
    
    p = head;
    p->edge = (struct Edge*) malloc(sizeof(struct Edge))
    
}
