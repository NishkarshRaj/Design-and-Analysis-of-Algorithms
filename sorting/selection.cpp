#include<iostream>
using namespace std;
int main()
{
int n,i,j,temp;
cout<<"Enter number of elements of array: ";
cin>>n;
int A[n];
for(i=0;i<n;i++)
{
cout<<"Enter "<<i+1<<" element of the array: ";
cin>>A[i];
}
cout<<"Lets do selection sorting"<<endl;
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
cout<<"Lets see Sorted Array"<<endl;
for(i=0;i<n;i++)
{
cout<<i+1<<" element of sorted array is: "<<A[i]<<endl;
};
}
