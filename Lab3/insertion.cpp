#include<iostream>
#include<time.h>
using namespace std;
int main()
{
clock_t s,e;
float t;
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
s=clock();
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
e=clock();
t=float(e-s)/CLOCKS_PER_SEC;
cout<<"Sorted Array is:"<<endl;
for(i=0;i<n;i++)
{
cout<<i+1<<" Element is :"<<A[i]<<endl;
}
cout<<"Time taken for processing is: "<<t<<endl;
}
