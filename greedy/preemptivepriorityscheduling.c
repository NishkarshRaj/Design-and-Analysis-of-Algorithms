#include<stdio.h>
int main ()
{
int n,i,j,temp;
printf("Enter the number of processes: ");
scanf("%d",&n);
int pnum[n],start[n],burst[n],turn[n];
for(i=0;i<n;i++)
{
printf("\n\nEnter the Details of %d process\n",i+1);
printf("Enter the process number: ");
scanf("%d",&pnum[i]);
printf("Enter the start time: ");
scanf("%d",&start[i]);
printf("Enter the end time: ");
scanf("%d",&burst[i]);
turn[i]=0;
}
printf("Sorting by the start time\n");
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(start[j]<start[i])
{
temp=start[j];
start[j]=start[i];
start[i]=temp;
temp=pnum[i];
pnum[i]=pnum[j];
pnum[j]=temp;
temp=burst[i];
burst[i]=burst[j];
burst[j]=temp;
}
}
}
printf("Printing the sorted process\n");
printf("Process number	Start time	End time\n");
for(i=0;i<n;i++)
{
printf("%d		%d		%d\n",pnum[i],start[i],burst[i]);
}
//////////////////////////////////////////

//////////////////////////////////////////
return 0;
}
