// Round Robin without arrival time

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n, qt; // number of process and quantum time
    int count = 0; // to count ... number of processes executed
    int temp , sq=0;
    int i; // looping variable

    float awt = 0 , atat = 0; // average waiting time and average turn around time

    printf("Enter number of processes : ");
    scanf("%d", &n);

    int bt[n], wt[n], tat[n], rem_bt[n]; // burst time , waiting time , turn around time and remaining burst time

    printf("\nEnter burst time for the processes : ");
    for ( i = 0; i < n; i++ )
    {
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];
    }

    printf("\nEnter quantum time : ");
    scanf("%d", &qt);

    while (1)
    {
        for ( i = 0, count = 0; i < n; i++ ) //count increments whenever a process is completely executed
        {
            temp = qt;

            if ( rem_bt[i] == 0 )
            {
                count++;  // process is completed
                continue;
            }


            if( rem_bt[i] > qt ) // process has not completed yet
            {
                rem_bt[i] = rem_bt[i] - qt;                
            }

            else
            if( rem_bt[i] >= 0 )
            {
                temp = rem_bt[i];
                rem_bt[i] = 0;
            }         
            sq = sq + temp;
            tat[i] = sq;
            

        } // for loop ends here

        if( count = n)
        break; // all the processes has completed

    }  // while loop ends here

    
    

    printf("\nProcess\tBurst Time\tTurn Around Time\tWaiting Time\n");
    // calculations
    for ( i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];

        printf("\n%d\t%d\t\t%d\t\t\t%d",i+1,bt[i],tat[i],wt[i]);
    }


    // calculating average waiting time and turn around time
    awt = awt/n;
    atat = atat/n;

    printf("\nAverage waiting time : %f", awt);
    printf("\nAverage Turn around time : %f", atat);

    return 0;
}
