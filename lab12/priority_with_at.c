//Priority Scheduling with arrival time

#include<stdio.h>
#define max 30

int main( int argc, char const *argv[] )
{
    int n; // number of processes
    int i, j, k = 1; // looping variables
    int t, b = 0, min, temp[max]; // temporary variables and array 
    int bt[max], at[max], wt[max], priority[max], tat[max];

    float awt = 0, atat = 0;

    printf("\nEnter number of processes : ");
    scanf("%d",&n);

    printf("\nEnter the Burst Time, Arrival Time and priority of the process : ");
    for( int i=0; i < n; i++ )
    {
        scanf( "%d %d %d",&bt[i], &at[i], &priority[i] );
    }

    //sorting in order of arrival time
    for( int i=0; i < n; i++ )
    {
        for( int j=0; j < n; j++ )
        {
            if(at[i] < at[j])
            {
                t = at[j];
                at[j] = at[i];
                at[i] = t;


                t = bt[j];
                bt[j] = bt[i];
                bt[i] = t;
            }
        }
    }

    // ----------------------------------- main code-----------------------------------//
    // sorting in order of priority

    for( int j=0; i < n; i++ )
    {
        b = b + bt[j];
        min = bt[k];
        for( int i=k; i < n; i++ )
        {
            min = priority[k];
            if (b >= at[i])
            {
                if( priority[i] < min )
                {
                    t = at[k];
                    at[k] = at[i];
                    at[i] = t;


                    t = bt[k];
                    bt[k] = bt[i];
                    bt[i] = t;


                    t = priority[k];
                    priority[k] = priority[i];
                    priority[i] = t;
                }

            }
        }

        k++;
    }

    temp[0] = 0;

    printf("\nProcess\tBurst Time\tArrival Time\tPriority\tWaiting Time\tTurn Around Time");
    //calculations
    for ( int i = 0; i < n; i++ )
    {
        wt[i] = 0;
        tat[i] = 0;
        temp[i+1] = temp[i] + bt[i];
        wt[i] = temp[i] - at[i];
        tat[i] = wt[i] + bt[i];

        awt = awt + wt[i];
        atat = atat + tat[i];
        printf("\n%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],at[i],priority[i],wt[i],tat[i]);        
    }

    awt = awt/n;
    atat = atat/n;

    printf("\nAverage waiting time : %f",awt);
    printf("\nAverage Turn Around Time : %f",atat);

    return 0;
}
