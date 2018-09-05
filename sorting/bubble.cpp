#include<iostream>
using namespace std;
int main()
{
int n,i,j,temp;
cout<<"Enter number of elements you want in array: ";
cin>>n;
int A[n];
for(i=0;i<n;i++)
{
cout<<"Enter "<<i+1<<" element of the array: ";
cin>>A[i];
}
cout<<"Lets sort the array by Bubble Sorting"<<endl;
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
cout<<"Lets see the sorted array"<<endl;
for(i=0;i<n;i++)
{
cout<<i+1<<" element of the sorted array is: "<<A[i]<<endl;
}
}
