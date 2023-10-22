#include <stdio.h>
#define max 30 //macro
int main(){
    int n,i,j; 
    int bt [max], at[max],wt[max],tat[max],temp[max]; //burst time and arrival time
    float awt =0,atat=0;

    printf("Enter the number of processes:\t");
    scanf("%d",&n);

    printf("Enter the Burst time of the process:\t");
    for(i=0;i<n;i++){
        scanf("%d",&bt[i]);
    }

    printf("Enter the Arrival time of the process:\t");
    for(i=0;i<n;i++){

        
        scanf("%d",&at[i]);
    }

    temp[0] = 0;
    printf("Process\tBurst Time\tArrival Time\tWaiting Time\tTurn Around Time\n");

    for(i=0;i<n;i++){
        wt[i]=0;
        tat[i]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt+=wt[i];
        atat += atat+tat[i];
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],wt[i],tat[i]);

    }

    awt=awt/n;
    atat=atat/n;
    printf("Avg waiting time =%f\n",awt);
    printf("Avg Turn around time =%f",atat);


    return 0;
}