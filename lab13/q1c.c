#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
int main()
{
    int i,ret;
    for( int i = 0; i < 2; i++ ) 
    {
        ret = fork();
        if( ret == 0 )
        {
            printf("\nProcess of the child = %d & Process of the parent = %d\n",getpid (), getppid ( ));
            sleep(7);
        }
        else if( ret > 0 )
        {
            printf("\nProcess of the parent is = %d\n",getpid());
            wait(NULL);
        }
    }
    return 0;
}