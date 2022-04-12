/*
Write the code in C to child_pid n integers in an array. Find out the sum and average of all the
odd numbers in that array in the parent process and display the average of all the prime
number in that array in the child process.
*/

#include<stdio.h>
#include<unistd.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("\nEnter the size of array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int sum_odd = 0; // to store sum of odd values 
    int child_pid, flag; // to store fork value and flag is used later for primes
    float average_odd = 0; // to store average of odd values in parent process
    float average_prime = 0; // to store average of prime values in parent process

    child_pid = fork();

    // As fork returns positive value to the parent process .... this will be executed
    if ( child_pid > 0 )
    {
        for ( int i = 0; i < n; i++ )
        {
            if ( arr[i] % 2 == 1 )
            {
                sum_odd = sum_odd + arr[i]; //calculating sum
            }
        }

        average_odd = sum_odd / n; // calculating average of odd numbers

        printf("\nIn Parent Process");
        printf("\nSum of odd numbers : %d",sum_odd);
        printf("\nAverage of odd numbers : %f", average_odd);        
    }

    // fork returns 0 to the child process
    else if (child_pid == 0)
    {
        for ( int i = 0; i < n; i++ ) // to traverse array
        {
            flag = 0; 
            for( int j = 0; j < arr[i]; j++)
            {
                if ( arr[i] % j == 0 )
                {
                    flag = 1; // number is not prime so break
                    break;
                }

                if(flag == 0)
                {
                    average_prime = average_prime + arr[i]; //add array value to the avg if no is prime
                }
            }
        }

        average_prime = average_prime / n; // calculating average of primes

        printf("\nIn child Process");
        printf("\nAverage of prime numbers : %f", average_prime);
    }

    else
    {
        printf("Process Creation Failed");
    }

    return 0;
}