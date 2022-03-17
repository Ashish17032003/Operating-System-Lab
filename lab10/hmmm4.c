#include<stdio.h>
void input(int *id,int *arrv,int *burst,int *temp,int n)
{
    printf("Enter the process's data:-\n");
    for(int i=0;i<n;i++)
    {
        printf("Id:-");
        scanf("%d",&id[i]);
        temp[i]=id[i];
        printf("Arrival:-");
        scanf("%d",&arrv[i]);
        printf("Burst:-");
        scanf("%d",&burst[i]);
    }
}


void sort(int *id,int *arrv,int *burst,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arrv[j]>arrv[j+1])
            {
                int temp=id[j];
                id[j]=id[j+1];
                id[j+1]=temp;

                temp=arrv[j];
                arrv[j]=arrv[j+1];
                arrv[j+1]=temp;

                temp=burst[j];
                burst[j]=burst[j+1];
                burst[j+1]=temp;
            }
        }
    }
}


void print(int *id,int *arrv,int *burst,int n)
{
    printf("Id\tArrival\tBurst\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t%d\t%d\n",id[i],arrv[i],burst[i]);
    }
}


void calculate(int *id,int *arrv,int *burst,int *tt,int *wt,int *temp,int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(count<arrv[i])
        {
            count=(arrv[i]-count)+burst[i]+count;
        }
        else
        {
            count=count+burst[i];
        }
        tt[i]=count-arrv[i];
        wt[i]=tt[i]-burst[i];
    }
}


void display(int *id,int *arrv,int *burst,int *tt,int *wt,int *temp,int n)
{
    printf("Id\tArrival\tBurst\tTT\tWT\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(id[j]==temp[i])
            {
                printf("%d\t%d\t%d\t%d\t%d\n",id[j],arrv[j],burst[j],tt[j],wt[j]);
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of processes\n");
    scanf("%d",&n);

    int burst[n],arrv[n],id[n],tt[n],wt[n],temp[n];

    input(id,arrv,burst,temp,n);
    sort(id,arrv,burst,n);

    printf("Order of execution:-\n");
    print(id,arrv,burst,n);
    calculate(id,arrv,burst,tt,wt,temp,n);
    printf("Turnaround Time & Waiting Time:-\n");
    display(id,arrv,burst,tt,wt,temp,n);
}