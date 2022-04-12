#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    int i,id; 
    for( i = 0; i < 1; i++ ) // may or may not include loop cause only need to create one process
    {
        id = fork();
        if( id == 0 ) // for child
        {
            printf("Process ID of the 1st Child : %d, Its ParentID : %d\n",getpid(),getppid());
        }
        else // else parent
        {
            wait( NULL );
            printf("Parent ProcessID : %d\n",getpid());
            break;
        }
    }
    return 0;
}