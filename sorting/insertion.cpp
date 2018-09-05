#include<iostream>
using namespace std;
int main()
{
int n,i,j,key;
cout<<"Enter size of array you want: ";
cin>>n;
int A[n];
for(i=0;i<n;i++)
{
cout<<"Enter "<<i+1<<" element of array"<<endl;
cin>>A[i];
}
cout<<"Lets do Insertion sort"<<endl;
for(i=0;i<n;i++)
{
key = A[i];
j=i-1;
while(j>=0 && A[j]>key)
{
A[j+1] = A[j];
j=j-1;
}
A[j+1]=key;
}
cout<<"Sorted Array is:"<<endl;
for(i=0;i<n;i++)
{
cout<<i+1<<" Element is :"<<A[i]<<endl;
}
}
