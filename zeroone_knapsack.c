#include<stdio.h>

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int knapsack(int val[],int w[],int W,int n ){
    if(n==0 || W==0){
        return 0;
    }
    if(w[n-1]>W){
        return knapsack(val,w,W,n-1);
    }
    else{
        return max(val[n-1] + knapsack(val,w,W-w[n-1],n-1),
                   knapsack(val,w,W,n-1));
    }
}

int main(){
    int w[4]={3,4,6,5};
    int val[4]={2,3,1,4};
    int W=8;

    int result=knapsack(val,w,W,4);
    printf("Optimal profit is::%d",result);




    return 0;
}