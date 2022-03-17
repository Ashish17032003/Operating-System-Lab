// FCFS schdeuling algorithm without arrival time


#include<stdio.h>

//function declarations (ignore for now)

void find_average_time( int proc[], int n, int bt[] );

void find_turnaround_time( int proc[], int n, int bt[], int wt[], int tat[] );

void  find_waiting_time( int proc[], int n, int bt[], int wt[] );

// function declarations 


void main()
{
    int n; //             for number of processes

    printf( "Enter the total number of Processes: " );
    scanf( "%d", &n );  //   taking input for number of processes


    printf("\nEnter the numbers/names for processes: ");
    int proc[n];  //       array to store processes
    for( int i = 0 ; i < n ; i++ )
    {
        scanf( "%d", &proc[i] ); 
    }


    int bt[n];  //      array to store burst time of processes
    printf( "\nEnter burst time for all the processes: " );
    for(int i = 0 ; i < n ; i++ )
    {
        scanf( "%d", &bt[i] );
    }


    find_average_time( proc, n, bt );  //passing processes and burst time along with number of processes

}


void find_average_time( int proc[], int n, int bt[] )
{

    int wt[n], tat[n]; // array which stores waiting time and turn around time for processes
    int total_wt = 0, total_tat = 0; // to find average tat and wt later

    find_waiting_time( proc, n, bt, wt );

    find_turnaround_time( proc, n, bt, wt, tat );
    // passing wt also cause we need wt also to find tat


    //Display processes along with all details
    printf("\nProcesses   Burst time   Waiting time   Turn around time\n" );
    for( int i = 0; i < n ; i++ )
    {
        total_wt = total_wt + wt[i];      // total waiting time
        total_tat = total_tat + tat[i];   // total turn around time

        printf("   %d ",(i+1) );
        printf("         %d ", bt[i] );
        printf("            %d",wt[i] );
        printf("              %d\n",tat[i] );
    }


    printf("\nAverage waiting time = %f ", (float)total_wt / (float)n );
    printf("\nAverage turn around time = %f ", (float)total_tat / (float)n );

}


void find_waiting_time( int proc[], int n, int bt[], int wt[])
{
    wt[0]=0; // As first process that comes need not to wait so waiting time for process 1 will be 0

    for( int i = 1; i < n; i++ )
    {
        wt[i] = bt[i-1] + wt[i-1];
    }   // calculating waiting time for process i

}

void find_turnaround_time( int proc[], int n, int bt[], int wt[], int tat[] )
{
    for( int i = 0; i < n; i++ )
    {
        tat[i] = wt[i] + bt[i];
    } 
    // since turnaround time = waiting time + burst time 
}