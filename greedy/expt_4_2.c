#include<stdio.h>
int main()
{
int n;
printf("Enter the number of problems you want: ");
scanf("%d",&n);
int pnum[n],start[n],burst[n],endtime[n];
for(i=0;i<n;i++)
{
printf("Enter details for activity %d\n",i+1);
printf("Process number: ");
scanf("%d",&pnum[i]);
printf("Start Time: ");
scanf("%d",&start[i]);
printf("Burst time: ");
scanf("%d",&burst[i]);
}

return 0;
}
