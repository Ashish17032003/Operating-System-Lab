/*

WAP in C to implement the SRTF scheduling algorithm with considering the arrival time.

TAT = 

*/

#include<stdio.h>

int main ( int argc, char const *argv[] )
{
    
    int n;
    int temp;

    printf("Enter total number of processes : ");
    scanf("%d",&n);

    int proc[n], arrival[n], burst[n], rem_time[n];

    printf("\nEnter the process id: ");
    for (int i=0; i<n; i++)
    {
        scanf("%d",&proc[i]);
    }

    printf("\nEnter arrival time for all the processes : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arrival[i]);
    }
    

    printf("\nEnter burst time for all the processes : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&burst[i]);

        rem_time[i] = burst[i];
    }


    return 0;
}




