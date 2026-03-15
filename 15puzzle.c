#include<stdio.h>
#include<stdlib.h>

int ar[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
int ar1[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,0,15}};

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int check(int ar1[][4]){
    int count=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(ar[i][j]!=ar1[i][j]){
                count++;
            }
        }
    }
    if(count==0){
        printf("Goal state reached");
        return 1;
    }
    else{
        printf("Errors=%d",count);
        return 0;
    }
    
}

void print(int ar1[][4]){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("[%d] ",ar1[i][j]);
        }
        printf("\n");
    }
}


int main(){
    

    printf("Given is::\n");
    print(ar1);

    
   
    while(1){
        printf("Start the game ::\nchoose what you want to do??\n");
        printf("1.UP\n2.DOWN\n3.RIGHT\n4.LEFT\n");
        int choice;
        scanf("%d",&choice);


        switch(choice){
            case 1:printf("The puzzle becomes::\n");
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(ar1[i][j]==0){
                        if(i!=0){
                            swap(&ar1[i][j],&ar1[i-1][j]);
                            break;
                        }
                        else if(i==0){
                            printf("Invalid move\n");
                            break;
                        }
                        
                    }
                    
                }
            }
            print(ar1);
            int f=check(ar1);
            if(f==1){
                exit(0);
            }
            break;

            case 2:printf("The puzzle becomes::\n");
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(ar1[i][j]==0){
                        if(i!=3){
                            swap(&ar1[i][j],&ar1[i+1][j]);
                            break;
                        }
                        else if(i==3){
                            printf("Invalid move\n");
                            break;
                        }
                        
                    }
                    
                }
            }
            print(ar1);
            f=check(ar1);
            if(f==1){
                exit(0);
            }
            break;

            case 3:printf("The puzzle becomes::\n");
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(ar1[i][j]==0){
                        if(j!=3){
                            swap(&ar1[i][j],&ar1[i][j+1]);
                            break;
                        }
                        else if(j==3){
                            printf("Invalid move\n");
                            break;
                        }
                        
                    }
                    
                }
            }
            print(ar1);
            f=check(ar1);
            if(f==1){
                exit(0);
            }
            break;

            case 4:printf("The puzzle becomes::\n");
            for(int i=0;i<4;i++){
                for(int j=0;j<4;j++){
                    if(ar1[i][j]==0){
                        if(j!=0){
                            swap(&ar1[i][j],&ar1[i][j-1]);
                            break;
                        }
                        else if(j==0){
                            printf("Invalid move\n");
                            break;
                        }
                        
                    }
                    
                }
            }
            print(ar1);
            f=check(ar1);
            if(f==1){
                exit(0);
            }
            break;


        }
    }



}