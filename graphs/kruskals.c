#include<stdio.h>
int main()
{
int n,r,c,k=0,temp,count=0;
printf("Enter the number of vertex you want: ");
scanf("%d",&n);
int adj[n][n];
int E[20],E1[20],E2[20];
for(r=0;r<n;r++)
{
for(c=0;c<n;c++)
{
if(r>c)
{
printf("Enter the weight between %d and %d element: ",r+1,c+1);
scanf("%d",&adj[r][c]);
E[k]=adj[r][c];
E1[k]=r+1;
E2[k]=c+1;
k++;
}
else
{
adj[r][c]=0;
}
}
}
//////////////////////////////////////////
for(r=0;r<n;r++)
printf("%d\t",r+1);
printf("\n");
for(r=0;r<n;r++)
{
for(c=0;c<n;c++)
{
printf("%d\t",adj[r][c]);
}
printf("\n");
}
///////////////////////////////////////////////////////////////////////////
//form set S and E
//sorting set E of edges
printf("Printing the original edge array\n");
for(r=0;r<k;r++)
{
printf("%d\t",E[r]);
}
printf("\n");
for(r=0;r<k-1;r++)
{
for(c=r;c<k;c++)
{
if(E[c]<E[r])
{
temp=E[r];
E[r]=E[c];
E[c]=temp;
temp=E1[r];
E1[r]=E1[c];
E1[c]=temp;
temp=E2[r];
E2[r]=E2[c];
E2[c]=temp;
}
}
}
printf("Printing the sorted array of edge set E\n");
printf("E	Src	Dst\n");
for(r=0;r<k;r++)
{
printf("%d\t%d\t%d\n",E[r],E1[r],E2[r]);
}
printf("\n");
////////////////////////////////////
//main work
r=0;
while((count!=n)&&(r<k))
{
printf("Selecting %d edge that is between %d and %d vertex\n",E[r],E1[r],E2[r]);
if()
{
//accept
count++;
}
else if
{
//cycle
//ignore
}
r++;
}
///////
return 0;
}
