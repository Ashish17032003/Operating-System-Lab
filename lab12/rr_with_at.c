// Round Robin with arrival time


#include <stdio.h>

int main()
{
    int n, count = 0, y, qt, wt = 0, tat = 0, at[10], bt[10], temp[10];
    float avg_wt, avg_tat;
    printf(" \nEnter number of processes: ");
    scanf("%d", &n);
    y = n;

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the Arrival and Burst time of the Process[%d]\n", i + 1);
        printf("\nArrival time : ");
        scanf("%d", &at[i]);
        printf(" \nBurst time : ");
        scanf("%d", &bt[i]);
        temp[i] = bt[i];  //  to store remaining burst time
    }

    printf("Enter the Quantum Time : ");
    scanf("%d", &qt);

    printf("\nProcess No \t\t Burst Time \t\t TAT \t\t Waiting Time ");
    for (int sum = 0, i = 0; y != 0;)
    {
        if ( temp[i] <= qt && temp[i] > 0 )
        {
            sum = sum + temp[i];
            temp[i] = 0;
            count = 1;
        }

        else if ( temp[i] > 0 )
        {
            temp[i] = temp[i] - qt;
            sum = sum + qt;
        }

        if ( temp[i] == 0 && count == 1 )
        {
            y--;
            printf("\nPId[%d] \t\t\t %d\t\t\22t %d\t\t %d", i + 1, bt[i], sum - at[i], sum - at[i] - bt[i]);
            wt = wt + sum - at[i] - bt[i];
            tat = tat + sum - at[i];
            count = 0;
        }

        if ( i == n - 1 )
        {
            i = 0;
        }

        else if (at[i + 1] <= sum)
        {
            i++;
        }

        else
        {
            i = 0;
        }
    }

    avg_wt = wt / n;
    avg_tat = tat / n;
    printf("\nAverage Turn Around Time: %f", avg_wt);
    printf("\nAverage Waiting Time: %f", avg_tat);
    return 0;
}