#include<stdio.h>
struct process{
    int bt,pn,pr,wt,tat;
};
struct process a[10];
struct process b[10];
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int main(){
    int i,j,k,sumwt,sumtat,n;
    printf("Enter the number of Process : ");
    scanf("%d",&n);
    printf("Enter the process Number ,burt time and priority\n");
    for(i=0;i<n;i++){
        scanf("%d%d%d",&a[i].pn,&a[i].bt,&a[i].pr);

    }
    printf("The given process\n");
    printf("Process     Burst time     Priority\n");
    for(i=0;i<n;i++){
    printf("  P%d           %d             %d\n",a[i].pn,a[i].bt,a[i].pr);
    }
    for (i = 0; i < n - 1; i++){
        for (j = 0; j < n - i - 1; j++){
            if (a[j].pr > a[j + 1].pr)
                swap(&a[j].pr, &a[j + 1].pr);
                swap(&a[j].pn, &a[j + 1].pn);
                swap(&a[j].bt, &a[j + 1].bt);
    }}
    printf("Process     Burst time     Priority\n");
    for(i=0;i<n;i++){
    printf("  P%d           %d             %d\n", a[i].pn,a[i].bt,a[i].pr);
    }
    for(i=0;i<n;i++){
        if(i==0){
            a[i].wt = 0;
            sumwt = sumwt + a[i].bt;
        }
        else{
            a[i].wt = sumwt;
            sumwt = sumwt + a[i].bt;

        }
    }
     printf("Process     waiting time\n");
    for(i=0;i<n;i++){
    printf("  P%d           %d\n", a[i].pn,a[i].wt);
    }
    return 0;
}


