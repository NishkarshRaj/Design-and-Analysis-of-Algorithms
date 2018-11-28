#include<stdio.h>
#include<time.h>
int linearsearch(int A[],int el,int n)
{
int i,flag=0;
for(i=0;i<n;i++)
{
if(A[i]==el)
{
flag=1;
break;
}
}
return flag;
}
int main()
{
int n,i,el,flag;
clock_t start,end;
double time;
printf("Enter the number of elements in the array: ");
scanf("%d",&n);
int A[n];
for(i=0;i<n;i++)
{
printf("Enter the %d element of the array: ",i+1);
scanf("%d",&A[i]);
}
printf("Enter the element you want to search in the array: ");
scanf("%d",&el);
start=clock();
flag=linearsearch(A,el,n);
end=clock();
time = (double)start-end/CLOCKS_PER_SEC;
if(flag==1)
printf("The element exists in the array");
else
printf("The element does not exist in the array\n");
printf("Time taken for linear search is :%f\n",time);
return 0;
}
