#include<stdio.h>
#include<time.h>
int main()
{
int n,i,j,temp1,temp2,temp3,lastindex;
clock_t s,end;
float t;
printf("Enter the number of activities to be performed: ");
scanf("%d",&n);
int anum[n],start[n],final[n];
for(i=0;i<n;i++)
{
printf("Enter the Activity number, start time and final time for %d process\n",i+1);
scanf("%d",&anum[i]);
scanf("%d",&start[i]);
scanf("%d",&final[i]);
}
s=clock();
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(final[j]<final[i])
{
temp1 = final[i];
final[i] = final[j];
final[j] = temp1;
temp2= anum[i];
anum[i]=anum[j];
anum[j]=temp2;
temp3=start[i];
start[i]=start[j];
start[j]=temp3;
}
}
}
//sorted successfully
printf("Activities sorted by final time are:\n");
for(i=0;i<n;i++)
{
printf("%d\t%d\t%d\n",anum[i],start[i],final[i]);
}
printf("%d Activity is performed\n",anum[0]);
lastindex=0;
for(i=1;i<n;i++)
{
if(start[i]>=final[lastindex])
{
printf("%d Activity is performed\n",anum[i]);
lastindex=i;
}
}
end=clock();
t=(float)end-s/CLOCKS_PER_SEC;
printf("Time taken for processing is: %f\n",t);
return 0;
}
