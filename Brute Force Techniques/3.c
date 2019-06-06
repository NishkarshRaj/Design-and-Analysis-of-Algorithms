#include<stdio.h>
#include<time.h>
int search(char A[],char B[],int n,int m)
{
int i,j,pos=-1;
for(i=0;i<n-m;i++)
{
	if(A[i]==B[0])
	{
		j=0;
		while(j<m && A[i+j]==B[j])
		j=j+1;
	}
	if(j==m)
	pos=i;
}
return pos;
}
int main()
{
int n,m,pos;
clock_t start,end;
double t;
printf("Enter the respective sizes of Text and Pattern arrays such that text has more size\n");
scanf("%d%d",&n,&m);
if (n>=m)
{
char TEXT[n],PATTERN[m];
printf("Enter the text string\n");
scanf("%s",TEXT);
printf("Enter the pattern string\n");
scanf("%s",PATTERN);
start=clock();
pos = search(TEXT,PATTERN,n,m);
end=clock();
t=(double)start-end/CLOCKS_PER_SEC;
printf("The element is found at %d index\n",pos);
printf("The time taken is %f\n",t);
}
else
{
printf("The size of pattern cannot be more than text!!");
}
return 0;
}
