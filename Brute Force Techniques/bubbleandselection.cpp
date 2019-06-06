#include<stdio.h>
#include<time.h>
void bubble_sort(int A[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(A[j]>A[j+1])
{
temp = A[j+1];
A[j+1] = A[j];
A[j] = temp;
}
}
}
}
void selection_sort(int A[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(A[j]<A[i])
{
temp = A[i];
A[i] = A[j];
A[j] = temp;
}
}
}
}
int main()
{
int n,i;
clock_t st,en;
double t;
printf("Enter size of the array: ");
scanf("%d",&n);
int A[n];
for(i=0;i<n;i++)
{
printf("Enter the %d element of the array: ",i+1);
scanf("%d",&A[i]);
}
int B[n];
for(i=0;i<n;i++)
B[i]=A[i];
st = clock();
bubble_sort(A,n);
en= clock();
t= (double)en-st/CLOCKS_PER_SEC;
printf("Time taken for Bubble sort is :%f \n",t);
st = clock();
selection_sort(B,n);
en=clock();
t= (double)en-st/CLOCKS_PER_SEC;
printf("Time taken for Selection sort is :%f \n",t);
return 0;
}
