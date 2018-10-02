#include<stdio.h>
int main()
{
int n,i,j,temp;
printf("Enter the number of activities: ");
scanf("%d",&n);
int pnum[n],start[n],end[n],result,hall;
for(i=0;i<n;i++)
{
printf("Details of process number %d\n",i+1);
printf("Process number: ");
scanf("%d",&pnum[i]);
printf("Start time: ");
scanf("%d",&start[i]);
printf("End time: ");
scanf("%d",&end[i]);
}
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(start[i]>start[j])
{
temp=start[i];
start[i]=start[j];
start[j]=temp;
temp=end[i];
end[i]=end[j];
end[j]=temp;
temp=pnum[i];
pnum[i]=pnum[j];
pnum[j]=temp;
}
}
}
printf("Sorted process on basis of start time are\n");
printf("Process number		start time  		End time\n");
for(i=0;i<n;i++)
{
printf("%d			%d			%d\n",pnum[i],start[i],end[i]);
}
i=1;
j=0;
result=1;
hall=1;
while (i<n && j<n)
{
	if(start[i]<end[j])
	{
	hall++;
	i++;
	if(result<hall)
	{
	result=hall;
	}
	}
else
{
hall--;
j++;
}
}
printf("Number of halls needed are: %d\n",result);
return 0;
}
