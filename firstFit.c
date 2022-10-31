#include<stdio.h>


void main(){
int i,j,k,n,temp=0,p[20],m[20];
   
    printf("Enter the Number of process : ");
    scanf("%d",&n);
    printf("Enter the process");
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);

    }
    printf("\nEnter the Number of memory blocks : ");
    scanf("%d",&k);
    printf("Enter the memory blocks\n");
    for(i=0;i<k;i++){
        scanf("%d",&m[i]);
    }
    printf("\ndoing first fit allocation\n");
    for(i=0;i<n;i++){
        temp = 0;
        for(j=0;j<k;j++){
            if(p[i]<=m[j]){
                m[j]=m[j]-p[i];
                printf("process %d allocated to memory block %d\n",i,j);
                temp = 1;
                break;
            }
            
            
        }
        if (temp == 0){
            printf("Process %dnot allocated to any memory \n",i);
        }
        
    }
}