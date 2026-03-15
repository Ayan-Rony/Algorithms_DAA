#include<stdio.h>
#define INF 1000000


int main(){

     int dist[4][4] = {
        {0, 5, INF, 10},
        {INF, 0, 3, INF},
        {INF, INF, 0, 1},
        {INF, INF, INF, 0}
    };
    int n=4;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                if(k==2)printf("%d ",dist[j][k]);
                if(dist[i][j]+dist[i][k]<dist[j][k]){
                    dist[j][k]=dist[i][j]+dist[i][k];
                }
            }
        }
    }

    printf("Shortest distance matrix:\n");
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(dist[i][j] == INF)
                printf("INF ");
            else
                printf("%d ", dist[i][j]);
        }
        printf("\n");
    }

}