#include<stdio.h>


void main(){
int i,j,l,k=3,n=3,p[3]={5,20,5},m[3]={10,20,30},min=10000,ind=0,arr[10];
   
    // printf("Enter the Number of process : ");
    // scanf("%d",&n);
    // printf("Enter the process");
    // for(i=0;i<n;i++){
    //     scanf("%d",&p[i]);

    // }
    // printf("\nEnter the Number of memory blocks : ");
    // scanf("%d",&k);
    // printf("Enter the memory blocks\n");
    // for(i=0;i<k;i++){
    //     scanf("%d",&m[i]);
    // }
    printf("\ndoing worst fit allocation\n");

    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            arr[j] = m[j]-p[i];
        }
        min == 10000;
        for(l=0;l<n;l++){
            if(arr[j]<min && arr[j]>=0){
                min = arr[j];
                ind = j;
            }
            
           
        }
         m[ind]= m[ind] - p[i];
            printf("\nprocess %d allocated to memory %d\n",i,ind);
            break;
    }
}