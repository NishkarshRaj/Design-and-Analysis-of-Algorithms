#include<stdio.h>
int main()
{
	int n,i,j,temp,t=0;
	printf("Enter the number of processes you want: ");
	scanf("%d",&n);
	int p[n],s[n],pt[n],c[n];
	for(i=0;i<n;i++)
	{
		printf("Enter details for %d process:\n",i+1);
		printf("Enter the process number: ");
		scanf("%d",&p[i]);
		printf("Enter the Start Time: ");
		scanf("%d",&s[i]);
		printf("Enter the Processing Time: ");
		scanf("%d",&pt[i]);
	}
	printf("PNum	Start	Burst\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%d\n",p[i],s[i],pt[i]);
	}	
	//
	///////////////
	printf("Sorting on the basis of Start Time\n");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j]>s[j+1])
			{
				temp=s[j];
				s[j]=s[j+1];
				s[j+1]=temp;
				//
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
				//
				temp=pt[j+1];
				pt[j]=pt[j+1];
				pt[j+1]=temp;
				//
			}
		}
	}
	///////////////
	printf("PNum	Start	Burst\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%d\n",p[i],s[i],pt[i]);
	}	
	//
	for(i=0;i<n;i++)
	{
		if((s[i]+pt[i])<=s[i+1])
		{
			temp=s[i]+pt[i];
			t=t+temp;
			c[i]=t;
		}
		else
		{
			c[i]=0;
			temp=s[i+1]-s[i];
			t=t+temp;
			pt[i]=pt[i]-temp;
		}
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==0)
		{
			c[i]=t+pt[i];
			t=t+pt[i];
		}
	}
	printf("PNum	Start	Burst	CompletionTime\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%d\t%d\n",p[i],s[i],pt[i],c[i]);
	}
	return 0;
}
