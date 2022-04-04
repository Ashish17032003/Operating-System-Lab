/*
WAP in C to implement the SJF scheduling algorithm without considering the arrival time. 
*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    int temp;

    printf("Enter total number of processes: ");
    scanf("%d",&n);

    int proc[n], burst[n], waiting[n], tat[n];
    float awt=0,atat=0; // to calculate average waiting time and averae turn around time

    printf("\nEnter the process id: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&proc[i]);
    }

    printf("\nEnter burst time for all the processes : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&burst[i]);
    }

    //applying bubble sort

    for( int i = 0; i < n; i++)
    {
        for( int j = 0; j < n-i-1; j++)
        {
            if(burst[j] > burst[j+1])
            {
                temp = burst[j];
                burst[j] = burst[j+1];
                burst[j+1] = temp; //swapped burst time


                temp = proc[j];
                proc[j] = proc[j+1];
                proc[j+1] = temp; //swapped process id

            }
        }
    }

    printf("Process \t Burst Time \t Waiting Time \t Turn Around time\n");
    //Calculations
    for( int i = 0; i < n; i++)
    {
        waiting[i] = 0;
        tat[i] = 0;

        for( int j = 0; j <i; j++)
        {
            waiting[i] = waiting[i] + burst[j];
        }

        tat[i] = waiting[i] + burst[i];
        awt = awt + waiting[i];
        atat = atat + tat[i];
        printf("  %d\t\t\t %d\t\t %d\t\t %d\n", proc[i], burst[i], waiting[i], tat[i]);
    }

    awt = awt/n;
    atat = atat/n;

    printf("\n\nAverage Waiting Time: %f\n", awt);
    printf("Averae Turn Around Time: %f\n", atat);

    return 0;
}