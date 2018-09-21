#include<stdio.h>
#include<time.h>
int main()
{
clock_t start,end; 
//Note that clock functions capturers current clock puls... Hence we divide by clocks per sec to get answer in seconds
double t;
int a;
start=clock();
scanf("%d",&a);
end=clock();
t=(double)(end-start)/CLOCKS_PER_SEC;
printf("User took these nanoseconds: %f\n",t*1000000000);
return 0;
}
