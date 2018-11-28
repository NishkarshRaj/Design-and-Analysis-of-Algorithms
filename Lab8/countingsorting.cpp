#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of elements in the array you want: ");
	scanf("%d",&n);
	int A[n],output[n];
	printf("Enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		printf("Enter the %d element: ",i+1);
		scanf("%d",&A[i]);
	}
	printf("The array taken is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
	return 0;
}
