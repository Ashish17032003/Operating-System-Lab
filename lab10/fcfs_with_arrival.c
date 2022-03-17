// FCFS schdeuling algorithm with arrival time

/* 
Lil knowledge

Turn Around Time = Completion Time - Arrival Time   
Waiting Time = Turnaround time - Burst Time  

*/

#include<stdio.h>

void main()
{
    int n; //  for number of processes

    int temp; // used later for swapping or sorting ..... sry 
    float total_wt=0,total_tat=0; // to find average later

    printf( "Enter the total number of Processes: " );
    scanf( "%d", &n );  //   taking input for number of processes

    int proc[n];  //       array to store processes
    printf("\nEnter the numbers/names for processes: ");    
    for( int i = 0 ; i < n ; i++ )
    {
        scanf( "%d", &proc[i] ); 
    }

    int at[n];  //     array to store arrival time of Processes
    printf("\nEnter the arrival time for all the processes: ");
    for( int i = 0 ; i < n ; i++ )
    {
        scanf( "%d", &at[i] );
    }

    int bt[n];  //      array to store burst time of processes
    printf( "\nEnter the burst time for all the processes: " );
    for(int i = 0 ; i < n ; i++ )
    {
        scanf( "%d", &bt[i] );
    }

    for(int i = 0 ; i < n ; i++ )
    {
        for(int j = i+1 ; j < n ; j++)
        {
            if( at[i] > at[j] )
            {
                temp = at[i] ; 
                at[i] = at[j] ;
                at[j] = temp ;   // swapped arrival time

                temp = bt[i] ;
                bt[i] = bt[j] ;
                bt[j] = temp ;   // swapped burst time


                temp= proc[i] ;
                proc[i] = proc[j] ;
                proc[j] = temp ; // swapped processes
            }
        }
    }   // loop to sort ... kinda

    
    int ct[n];  //   array to store completion time of processes
    int sum=0; // to calculate total burst time of previous processes 
    for(int i = 0 ; i < n ; i++ )
    {
        sum = sum + bt[i];        
        ct[i] = ct[i] + sum;
    }
    
    int tat[n];  // array to store turn around time of processes
    int wt[n];  // array to store waiting time of processes
    for(int i = 0 ; i < n ; i++ )
    {
        tat[i] = ct[i] - at[i];
        total_tat = total_tat + tat[i];

        wt[i] = tat[i] - bt[i];
        total_wt = total_wt + wt[i];
    }

    //Display processes along with all details
    printf("\nProcesses   Burst time    Completion Time   Turn around time   Waiting time\n" );
    for( int i = 0; i < n ; i++ )
    {
        printf("   %d ",i );
        printf("         %d ",bt[i] );
        printf("            %d",ct[i] );
        printf("              %d\n",tat[i] );
        printf("                   %d\n",wt[i] );
    }
    
    printf("\nAverage waiting time = %f ", total_wt / n );
    printf("\nAverage turn around time = %f ", total_tat / n );   
    
}