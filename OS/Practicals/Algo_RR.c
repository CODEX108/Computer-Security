#include <stdio.h>
int main(){

    int n,i,count=0,qt,temp=0,sq=0;
    int bt[10],wt[10],tat[10],rem_bt[10];
    float awt=0,atat=0;
    
    printf("Enter the number of processes : " + n);
    scanf("%d", &n);

    printf("Enter the burst time of the process : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
        rem_bt[i]=bt[i];
    }

    printf("Enter the quantum time: ");
    scanf("%d",& qt);

    while (1)
    {
        for(i=0,count=0;i<n;i++){
            temp=qt;
            if(rem_bt[i]==0){
                count++;
                continue;
            }

            if(rem_bt[i]>qt){
                rem_bt[i] =rem_bt[i]-qt;
            }
            else
            if(rem_bt[i]>=0){
                temp = rem_bt[i];
                rem_bt[i]=0;
            }

            sq+=temp;
            tat[i]=sq;
        }

        if(n==count)
            break;
        
    }
    printf("\nProcess\tBurst Time\t Turn around time\tWainting time\n");
    for(i=0;i<n;i++){
        wt[i]=tat[i]-bt[i];
        awt += wt[i];
        atat+=tat[i];
        printf("\n%d\t\t%d\t\t\t\t%d\t\t\t\t%d",i+1,bt[i],tat[i],wt[i]);
    }
    
    awt = awt/n;
    atat = atat/n;
    printf("\nAverage waiting time :%f \n ",awt);
     printf("Average turn around time :%f \n ",atat);


    return 0;
}