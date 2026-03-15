#include<stdio.h>
float p[5]={6,7,8,9,4};
float w[5]={10,40,50,20,30};
float pw[5];

void p_w(float a[],float b[]){
    for(int i=0;i<5;i++){
        pw[i]=a[i]/b[i];
    }
}
void bubble(float pw[],int size){
    for(int step=0;step<size-1;step++){
        for(int i=0;i<size-step-1;i++){
            if(pw[i]<pw[i+1]){
                float temp=pw[i];
                pw[i]=pw[i+1];
                pw[i+1]=temp;

                float temp1=w[i];
                w[i]=w[i+1];
                w[i+1]=temp1;

                float temp2=p[i];
                p[i]=p[i+1];
                p[i+1]=temp2;

            }
        }
    }
}
void print(float ar[],int size){
    for(int i=0;i<size;i++){
        printf("%f ",ar[i]);
    }
    printf("\n");
}
int total=70;

void knapsack(){
    int weight=0;
    float profit=0;

    for(int i=0;i<5;i++){
        if(w[i]<=total){
            total-=w[i];
            weight=weight+w[i];
            profit=profit+p[i];
        }
        else if(w[i]>total){
            float x=(total/w[i]);
            profit=profit+(x*p[i]);
        }
    }
    printf("Optimal Profit is=%.3f",profit);

    
}

int main(){
    p_w(p,w);
    bubble(pw,5);
    print(w,5);
    print(p,5);
    print(pw,5);
    knapsack();

}