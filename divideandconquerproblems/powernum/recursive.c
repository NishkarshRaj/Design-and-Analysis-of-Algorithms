#include<stdio.h>
int power(int a,int n)
{
int i,p=1;
if(n==1)
return p;
else
{
p=p*a;
power(a,n-1);
}
}
int main()
{
int a,n,p;
printf("Enter the number whose exponent you want: ");
scanf("%d",&a);
printf("Enter the exponent value: ");
scanf("%d",&n);
p=power(a,n);
printf("The value of %d over %d is: %d\n",a,n,p);
return 0;
}
