#include <stdio.h>

struct process
{
    int pid;
    int ct, bt, at, wt, tat, rt; // completion time,CPU burst time,arrival time,turn around time,waiting time
    int start_time;              // from where the process will start
} p[100];                        // array of structures to store information about all the procrsses
// here p is the alias name for struct process

// function to find maximum number
int findmax(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int length_cycle;
    float sum_wt = 0, sum_tat = 0, sum_rt = 0;
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter the arrival time of process P%d : ", i);
        scanf("%d", &p[i].at);
        p[i].pid = i;
    }

    printf("\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter the burst time of process P%d : ", i);
        scanf("%d", &p[i].bt);
    }

    // Calculations
    for (int i; i < n; i++)
    {
        // This condition takes all the 3 cases into consideration p[i-1].ct >= p[i].at  and   p[i-1].ct < p[i].at  (idle time of CPU case)
        // The findmax function will return the start_time of the immediate previous process
        p[i].start_time = (i == 0) ? p[i].at = 0 : findmax(p[i].at, p[i - 1].ct);
        p[i].ct = p[i].start_time + p[i].bt;
        p[i].tat = p[i].ct - p[i].at;
        p[i].wt = p[i].tat - p[i].bt;
        p[i].rt = p[i].wt;

        sum_tat += p[i].tat;
        sum_rt += p[i].rt;
        sum_wt += p[i].wt;
      
    }
     length_cycle = p[n-1].ct - p[0].start_time; 

    // Printing the output
    printf("\nProcess No.\tAT\tCPU Burst Time\tCT\tTAT\tWT\tRT\n");
    for (int i = 0; i < n; i++)
        printf("%d\t\t%d\t%d\t\t%d\t%d\t%d\t%d\n", p[i].pid, p[i].at, p[i].bt, p[i].ct, p[i].tat, p[i].wt, p[i].rt);

    printf("\n");

    printf("\nAverage Turn Around time= %f ", sum_tat / n);
    printf("\nAverage Waiting Time= %f ", sum_wt / n);
    printf("\nAverage Response Time= %f ", sum_rt / n);
    printf("\nThroughput= %f",n/(float)length_cycle);    
    

    return 0;
}