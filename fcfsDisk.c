#include<stdio.h>
void main(){
  int i,j,n,temp,readyQ[100],initial;
  printf("Enter the number of requests : ");
  scanf("%d",&n);
  printf("Enter the requests : ");
  for(i=0;i<n;i++){
    scanf("%d",&readyQ[i]);
  }
  printf("Enter the initial position : ");
  scanf("%d",&initial);
  for(i=0;i<n;i++){
    temp = temp + abs(initial - readyQ[i]);
    initial = readyQ[i];
  }
  printf("Total Head Movement : %d",temp);
}