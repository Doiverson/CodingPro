//
//  main.c
//  Practice_C_Check
//
//  Created by SHOSUKE DOI on 2018-05-29.
//  Copyright © 2018 SHOSUKE DOI. All rights reserved.
//

#include<stdio.h>
#define INFINITY 9999
#define MAX 10

void dijkstra(int G[7][7],int n,int startnode);

int main()
{
    int n,u;
    printf("Enter no. of nodes:");
    scanf("%d",&n);
    printf("\nEnter the adjacency matrix:\n");
    
    int G[7][7] = {
        {0, 10, 0, 0, 0, 6, 0},
        {0, 0, 6, 0, 0, 0, 0},
        {0, 10, 0, 0, 0, 0, 0},
        {3, 0, 0, 0, 0, 0, 0},
        {0, 5, 0, 0, 0, 0, 0},
        {0, 10, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0}
    };
    
    printf("\nEnter the starting node:");
    scanf("%d",&u);
    dijkstra(G,n,u);
    
    return 0;
}

void dijkstra(int G[7][7],int n,int startnode)
{
    
    int cost[MAX][MAX],distance[MAX],pred[MAX];
    int visited[MAX],count,mindistance,nextnode = 0,i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(G[i][j]==0){
                cost[i][j]=INFINITY;
            }
            else{
                cost[i][j]=G[i][j];
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        distance[i]=cost[startnode][i];
        pred[i]=startnode;
        visited[i]=0;
    }
    
    distance[startnode]=0;
    visited[startnode]=1;
    count=1;
    
    while(count<n-1)
    {
        mindistance=INFINITY;
 
        for(i=0;i<n;i++)
            if(distance[i]<mindistance&&!visited[i])
            {
                mindistance=distance[i];
                nextnode=i;
            }
        
   
        visited[nextnode]=1;
        for(i=0;i<n;i++)
            if(!visited[i])
                if(mindistance+cost[nextnode][i]<distance[i])
                {
                    distance[i]=mindistance+cost[nextnode][i];
                    pred[i]=nextnode;
                }
        count++;
    }
    

    for(i=0;i<n;i++)
        if(i!=startnode)
        {
            printf("\nDistance of node%d=%d",i,distance[i]);
            printf("\nPath=%d",i);
            
            j=i;
            do
            {
                j=pred[j];
                printf("<-%d",j);
            }while(j!=startnode);
        }
    
    int min=distance[1];
    int X = 0;
    for(int i=0; i<n; ++i){
        if(distance[0]>distance[i]){
            min=distance[i];
            X = i;
        }
    }
    printf("\n<Shortest Path is %d and Min Distance is %d>\n",X,min);
}
