#include<stdio.h>
struct process{
        int bt,pn;
        
    };
struct process a[10];
int main(){
    int i,j,k,n,temparr[100],temp,count,temp1,wt[10],tat[10],sumwt=0;
    printf("Enter the Number of process : ");
    scanf("%d",&n);
    printf("Enter process name and burst time\n ");
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i].pn,&a[i].bt);
        temparr[i]=a[i].bt;
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i].bt>a[j].bt){
                temp = a[i].bt;
                a[i].bt = a[j].bt;
                a[j].bt = temp;

                temp1 = a[i].pn;
                a[i].pn = a[j].pn;
                a[j].pn = temp1;
            }
        }
    }
    
    printf("process   burst time\n");
    for(i=0;i<n;i++){
    printf("    %d        %d\n",a[i].pn,a[i].bt);
    }

    for(i=0;i<n;i++){
        if(i==0){
            wt[i]= 0;
            sumwt = sumwt + a[i].bt;
        }
        else{
            wt[i]= sumwt;
            sumwt = sumwt + a[i].bt;
        }
    }

    printf("process   waiting time\n");
    for(i=0;i<n;i++){
    printf("    %d        %d\n",a[i].pn,wt[i]);
    }

    return 0;
}