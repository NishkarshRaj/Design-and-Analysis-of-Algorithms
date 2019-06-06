#include<stdio.h>
int main()
{
	int i,n,wt,r,c,temp,k;
	printf("Enter the number of elements of the array: ");
	scanf("%d",&n);
	printf("Enter the total weight of the bag: ");
	scanf("%d",&wt);
	int item[n],value[n],weight[n],matrix[n+1][wt+1];
	for(i=0;i<n;i++)
	{
		printf("\n\n");
		printf("Enter the item number, value and weight of the %d item\n",i+1);
		scanf("%d",&item[i]);
		scanf("%d",&value[i]);
		scanf("%d",&weight[i]);
	}
	for(r=0;r<n+1;r++)
	{
		for(c=0;c<wt+1;c++)
		{
			matrix[r][c]=0;
		}
	}
	for(r=1;r<n+1;r++)
	{
		for(c=1;c<wt+1;c++)
		{
			if(weight[r-1]>c)
			{
				matrix[r][c]=matrix[r-1][c];
			}
			else if(weight[r-1]<=c)
			{
				k=c-weight[r-1];
				temp=value[r-1]+matrix[r-1][k];
				if((matrix[r-1][c])>=(temp))
				{
					matrix[r][c]=matrix[r-1][c];
				}
				else
				{
					matrix[r][c]=temp;
				}
			}
		}
	}
	printf("\n\n");
	for(r=0;r<n+1;r++)
	{
		for(c=0;c<wt+1;c++)
		{
			printf("%d\t",matrix[r][c]);
		}
		printf("\n");
	}
	return 0;
}
