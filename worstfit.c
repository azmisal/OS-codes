#include<stdio.h>


void main(){
int i,j,k,n,p[20],m[30],max =0,ind=0;
   
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
    printf("\ndoing worst fit allocation\n");
    for(i=0;i<n;i++){
       
        for(j=0;j<k;j++){
            if(m[j]>max){
                max = m[j];
                ind  = j;
            }
            }
            if(p[i]<m[ind]){
                printf("\nProcess %d is allocated to memory block %d\n",i,ind);
            }
            else{
                printf("process %d not allocatee to any memory",i);
            }
            
        }
        
        
    }
