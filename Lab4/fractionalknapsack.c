#include<stdio.h>
int main()
{
int n,i,bag,itemp,j;
printf("Enter the number of items: ");
scanf("%d",&n);
int profit[n],weight[n],item[n];
float ppw[n],ftemp,p=0;
for(i=0;i<n;i++)
{
printf("\n\nDetails of item number: %d\n",i+1);
printf("Item name: ");
scanf("%d",&item[i]);
printf("Profit: ");
scanf("%d",&profit[i]);
printf("Weight: ");
scanf("%d",&weight[i]);
ppw[i]=(float)(profit[i]/weight[i]);
}
printf("\n\n");
printf("Enter the weight of the bag: ");
scanf("%d",&bag);
printf("Sorting the process by profit per weight\n");
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(ppw[i]<ppw[j])
{
ftemp=ppw[i];
ppw[i]=ppw[j];
ppw[j]=ftemp;
itemp=profit[i];
profit[i]=profit[j];
profit[j]=itemp;
itemp=weight[i];
weight[i]=weight[j];
weight[j]=itemp;
itemp=item[i];
item[i]=item[j];
item[j]=itemp;
}
}
}
printf("\n\n");
printf("Item name		Profit		Weight		Profit per weight\n");
for(i=0;i<n;i++)
{
printf("%d			%d		%d		%f\n",item[i],profit[i],weight[i],ppw[i]);
}
while(bag>0)
{
for(i=0;i<n;i++)
{
///////
if (bag==0)
break;
//////
else if(bag>weight[i])
{
bag=bag-weight[i];
p=p+profit[i];
}
else
{
p=p+ppw[i]*bag;
bag=0;
}
}
}
printf("Total Profit by Knapsack problem is: %f\n",p);
return 0;
}
