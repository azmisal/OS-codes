#include<stdio.h>
#include <stdlib.h>
int main(){
    int  i,j,n,readyQ[100],initial,Total = 0,size,move;
    printf("Enter the number request : ");
    scanf("%d",&n);
    printf("Enter the requests ");
    for(i=0;i<n;i++){
        scanf("%d",&readyQ[i]);
    }
    printf("Enter the intial state : ");
    scanf("%d",&initial);
	printf("Enter total disk size : ");
	scanf("%d",&size);
	
	printf("Enter the head movement direction for high 1 & for low 0 : ");
	
	scanf("%d",&move);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(readyQ[j]>readyQ[j+1])
			{
				int temp=readyQ[j];
				 readyQ[j]=readyQ[j+1];
				 readyQ[j+1]=temp;
				 
				}
		}
	}
	int index;
	for(i=0;i<n;i++)
	{
		if(initial<readyQ[i])
		{
			index=i;
			break;
			}
		}
	//if movement is towards high value
	
	if(move==1)
	{
		for(i=index;i<n;i++)
		{
			Total=Total + abs(readyQ[i]-initial);
			initial = readyQ[i];
		}
	//last movement for max size
	
	Total = Total + abs(size-readyQ[i-1]-1);
	initial=size-1;
	for(i=index-1;i>=0;i--)
	{
		Total = Total + abs(readyQ[i]-initial);
		initial=readyQ[i];
		}
	}
	//if movement is towards low value
	
else
	{
		for(i=index-1;i>=0;i--)
		{
			Total = Total + abs(readyQ[i]-initial);
			initial = readyQ[i];
		}
	//last movement for min size
	Total = Total+abs(readyQ[i+1]-0);
	initial=0;
	for(i=index;i<n;i++)
	{
		Total = Total + abs(readyQ[i]-initial);
		initial=readyQ[i];
	}
	
}
printf("Total head movement is %d ",Total);
return 0;
}







    