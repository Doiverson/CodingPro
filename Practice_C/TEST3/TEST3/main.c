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

int getNumberOfNodes(){
    return 7;
    }

int getNumberOfEdges(){
    return 8;
    }

char* getNodes(){
    return "A,B,C,D,E,F,G";
}

char* getEdges(){
    return "A_B_10,A_F_6,B_C_6,C_B,10,D_A_3,E_B_5,F_B_10,G_G_0";
}


//Define Types of Date Structure

struct node{
    struct node* from;
    int visited;
    char name;
    int cost;
    struct Edge* edge;
    struct node* next;
};

struct Edge{
    int distance;
    struct node* to;
    struct Edge* next;
};

//Declare Struct Variables

struct node* head = NULL;
struct node* current = NULL;
struct node* prev = NULL;
struct node* p;
struct Edge* edgepoint = NULL;
struct Edge* pe;
struct node* le;

void showNodes(struct node *nodes) {
    printf("Show Nodes-----------\n");
    while (nodes != NULL) {
        printf("id = %c\n", nodes->name);
        //printf("prevNode = %d\n", nodes->prevNode);
        while (nodes->edge != NULL) {
            printf("%c %d\n", nodes->edge->to->name, nodes->edge->distance);
            nodes->edge = nodes->edge->next;
        }
        nodes = nodes->next;
    }
}

int main() {
    
    //Split Inputs
    int i=0, c=0;
    char source = 'A';
    char destination = 'F';
    char getNodes[] = {'A','B','C','D','E','F','G'};
    int e = getNumberOfEdges();
    int n = getNumberOfNodes();
    char first[] = {'A','A','B','C','D','E','F','G'};
    char second[] = {'B','F','C','B','A','B','B','G'};
    int value[] = {10,6,6,10,3,5,10,0};
 
    //Create Linked List and Initiallize
    
    for(int i=0; i<n; i++){
        if(i==0){
            current = (struct node*) malloc(sizeof(struct node));
            head = current;
            current->from = NULL;
            current->visited = 0;
            current->name = getNodes[i];
            current->cost = INF;
            current->edge = NULL;
            current->next = NULL;
            
        } else {
            current->next =(struct node*) malloc(sizeof(struct node));
            current = current->next;
            current->from = NULL;
            current->visited = 0;
            current->name = getNodes[i];
            current->cost = INF;
            current->edge = NULL;
            
        }
        
        current->next = NULL;
    }
    
    //Add Edges and Initiallize
    
    
    
    for(int i=0; i<e; i++){
        edgepoint = (struct Edge*) malloc(sizeof(struct Edge));
        p = head;
            while(p->name!=second[i]){
                p = p->next;
            }
            edgepoint->distance = value[i];
            edgepoint->to = p;
            edgepoint->next = NULL;
            
            p =head;
            while(p->name!=first[i]){
                p = p->next;
            }
            if(p->edge==NULL){
                p->edge = edgepoint;
                
            } else {
                pe = p->edge;
                while(pe->next!=NULL){
                pe->next = edgepoint;
                }
        }

        edgepoint->next = NULL;
    }
    
showNodes(head);
  
    // Dijkstra Algorithm
    
    p=head;
    int min = 0;
    
    while(p!=NULL){
        if(p->name==source){
            p->cost = 0;
            p->visited = 1;
            break;
    }
        
        le = head;
        for(int i=0;i>n; i++){
            if(le->visited!=1 && le->cost > min ){
                min = le->cost;
                
            }
        }
    
    
//    if(p->name=destination)
//    if(pe->distance > distance[index] + edge[index][i]){
//        distance[i] = distance[index] + edge[index][i];
//        previous[i] = index;
}
