#include<stdio.h>
int main()
{
int a,n,i,p=1;
printf("Enter the number whose power you want: ");
scanf("%d",&a);
printf("Enter the number who must be exponent: ");
scanf("%d",&n);
for(i=0;i<n;i++)
p=p*a;
printf("Exponent of %d over %d is: %d\n",a,n,p);
return 0;
}
