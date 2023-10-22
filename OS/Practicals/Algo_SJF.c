
#include <stdio.h>
#define max 30

int main()
{

    int i, j, n, temp, p[max], bt[max], wt[max], tat[max];
    float avg_wt = 0, avg_tat = 0;

   
    printf("Enter the number of processes : " + n);
    scanf("%d", &n);

    printf("Enter the  process number : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Enter the burst time of the process ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }

    // bubble sort
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (bt[j] > bt[j + 1])
            {

                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    printf("Process\tBurst time\tWaiting time\tTurn around time\n");
    for(i=0;i<n;i++){
        wt[i]=0;
        tat[i]=0;

        for(j=0;j<i;j++){
            wt[i] =wt[i]+bt[j];
        }
        tat[i] = wt[i]+bt[i];
        avg_wt +=wt[i];
        avg_tat  += tat[i];

        printf("%d\t %d\t\t %d\t\t %d\n",p[i],bt[i],wt[i],tat[i]);
    }

    avg_tat = avg_tat/n;
    avg_wt = avg_wt/n;

    printf("Average waiting time :%f\n",avg_wt);
    printf("Average turn around time :%f\n",avg_tat);

    return 0;
}
