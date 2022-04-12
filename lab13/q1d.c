#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    int status = 0;
    printf( "Process Id of Paremt}: %d\n\n", (int)getpid() );
    pid_t pid = fork();

    if( pid == 0 )
    {
        printf("Process ID of Child = %d,its Parent ID = %d.\n",getpid(),getppid());
        exit(1);
    }

    else
    {
        pid_t childPid = wait(&status);
        int childReturnValue = WEXITSTATUS(status);
        pid_t pid = fork(); // fork a child

        if ( pid == 0 )
        {

            printf("Process ID of Child = %d,its Parent ID = %d.\n", getpid(), getppid());
            pid = fork(); // fork a child

            if (pid == 0)
            {
                printf("Process ID of Child = %d,its Parent ID = %d.\n",getpid(),getppid());
                exit(3);
            }

            else
            {
                pid_t childPid = wait(&status);
                int childReturnValue = WEXITSTATUS(status);
            }

            exit(2);
        }
            
        else
        {
            pid_t childPid = wait(&status);
            int childReturnValue = WEXITSTATUS(status);
        }
        
    }

    return 0;
}