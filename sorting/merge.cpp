#include<iostream>
using namespace std;
//l is lowest index and r is the max index (left and right)
void merge(int A[],int l,int m ,int r)
{
//this function is to merge the partitioned arrays
//creating temp arrays
int n1 = m-l+1;
int n2 = r-m;
int A1[n1],A2[n2],i,j,k;
//First subarray begins from l to m
//second subarray begins from m+1 to r
//Filling the array
for(i=0;i<n1;i++)
{
A1[i] = A[l+i];
}
for(j=0;j<n2;j++)
{
A2[j] = A[m+1+j];
}
//Refilling the old array with correct order
i=0; //counter for A1
j=0;//counter for A2
k=l;//counter for A
while((i<n1) && (j<n2))
{
if (A1[i]<=A2[j])
{
A[k]=A1[i];
i++;
}
else
{
A[k]=A2[j];
j++;
}
k++;
}
//If any elements remain fill them because above while loop ends when either of the subarryas is filled
while(i<n1)
{
A[k]=A1[i];
i++;
k++;
}
while(j<n2)
{
A[k]=A2[j];
k++;
j++;
}
}
///////////////////////////////////////////////////////////////////
//Main merge sort function
void mergesort(int A[],int l,int r)
{
if(l<r)
{
int m=(l+r)/2;
//Sorting to first and second halves
mergesort(A,l,m);
mergesort(A,m+1,r);
//merging them
merge(A,l,m,r);
}
}
int main()
{
int n,l,r,i;
cout<<"Enter the array size you want: ";
cin>>n;
int A[n];
for(i=0;i<n;i++)
{
cout<<"Enter "<<i+1<<" element of the array: ";
cin>>A[i];
}
cout<<"Lets do merge sorting"<<endl;
mergesort(A,0,n-1);
for(i=0;i<n;i++)
{
cout<<i+1<<" element of the array is: "<<A[i]<<endl;
}
}
