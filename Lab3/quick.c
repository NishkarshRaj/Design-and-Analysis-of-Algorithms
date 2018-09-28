#include<stdio.h>
#include<time.h>
///////////////////////////
void swap(int *x,int *y)
{
int temp;
temp = *x;
*x = *y;
*y =temp;
}
////////////////////////////
int partition(int A[],int low,int high)
{
int i,j,pivot;
pivot = A[high];
i=low-1;
for(j=low;j<=high-1;j++)
{
if(A[j]<=pivot)
{
i++;
swap(&A[i],&A[j]);
}
}
swap(&A[i+1],&A[high]);
return (i+1);
}
//////////////////////////////
void quicksort(int A[],int low,int high)
{
int pi;
if (low<high)
{
pi = partition(A,low,high);
quicksort(A,low,pi-1);
quicksort(A,pi+1,high);
}
}
//////////////////////////
int main()
{
clock_t start,end;
double time;
int n,i;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int A[n];
for(i=0;i<n;i++)
{
printf("Enter the %d element of the array: ",i+1);
scanf("%d",&A[i]);
}
printf("Lets do the quick sort of given array\n");
start=clock();
quicksort(A,0,n-1);
end=clock();
time = (double)((start-end)/CLOCKS_PER_SEC);
printf("The sorted array is:\n");
for(i=0;i<n;i++)
{
printf("The %d element of the sorted array is: %d\n",i+1,A[i]);
}
printf("Time taken for the quick sort is: %f\n",time);
return 0;
}
