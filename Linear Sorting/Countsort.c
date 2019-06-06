#include<stdio.h>
int main()
{
	int count[10],i,n,j,A[10];
	for(i=0;i<10;i++)
	{
		count[i]=0;
	}
	printf("Enter number of elements you want (less than 10): ");
	scanf("%d",&n);
	int B[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&B[i]);
	}
	for(i=0;i<n;i++)
	{
		j=B[i];
		count[j]++;
	}
	////////////////////////
	printf("Index   Count\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t%d\n",i,count[i]);
	}
	///////////////////////
	int sumcount[10],counter=0;
	for(i=0;i<10;i++)
	{
		counter=count[i]+counter;
		sumcount[i]=counter;
	}
	///////////////////////
		printf("Index   Count\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t%d\n",i,sumcount[i]);
	}
	/////////////////////////////
	//initialize output array
	for(i=0;i<10;i++)
	{
		A[i]=0;
	}
	//////////////////////////////
	for(i=0;i<10;i++)
	{
		j=sumcount[i];
		while(count[i]--)
		{
			A[j]=i;
			//count[i]--;
			j--;
		}
	}
	///////////////////////////
	printf("Sorted Array is:\n");
	for(i=1;i<n+1;i++)
	{
		printf("%d\t",A[i]);
	}
	return 0;
}
