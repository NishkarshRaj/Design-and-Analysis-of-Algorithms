#include<stdio.h>
#include<time.h>
int main()
{
int A[2][2],B[2][2],C[2][2],i,j,p1,p2,p3,p4,p5,p6,p7;
clock_t s,e;
float t;
printf("Enter the elements of matrix A\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&A[i][j]);
}
}
printf("Enter the elements of matrix B\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&B[i][j]);
}
}
s=clock();
p1=A[0][0]*(B[0][1]-B[1][1]);
p2=(A[0][0]+A[0][1])*B[1][1];
p3=(A[1][0]+A[1][1])*B[0][0];
p4=A[1][1]*(B[1][0]-B[0][0]);
p5=(A[0][0]+A[1][1])*(B[0][0]+B[1][1]);
p6=(A[0][1]-A[1][1])*(B[1][0]+B[1][1]);
p7=(A[0][0]-A[1][0])*(B[0][0]+B[0][1]);
C[0][0]=p5+p4-p2+p6;
C[0][1]=p1+p2;
C[1][0]=p3+p4;
C[1][1]=p1+p5-p3-p7;
e=clock();
printf("Printing the array C\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",C[i][j]);
}
printf("\n");
}
t=(float)e-s/CLOCKS_PER_SEC;
printf("Time taken for processing is: %f\n",t);
return 0;
}
