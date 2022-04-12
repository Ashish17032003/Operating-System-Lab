#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    int i,id;
    for( i = 0 ; i < 2; i++ )
    {
        id = fork();
        if( id == 0 )
        {
            printf("Process ID of the 1st Child : %d, Its ParentID : %d\n",getpid(),getppid());
        }
        else
        {
            wait(NULL);
            printf("Parent ProcessID : %d\n",getpid());
            break;
        }
    }
    return 0;
}