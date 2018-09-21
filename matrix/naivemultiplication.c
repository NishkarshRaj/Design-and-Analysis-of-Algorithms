#include<stdio.h>
int main()
{
int r1,c1,r2,c2,i,j,k;
printf("Enter the number of rows and columns of first matrix\n");
scanf("%d%d",&r1,&c1);
int A[r1][c1];
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("Enter the %d row and %d column element of A matrix: ",i+1,j+1);
scanf("%d",&A[i][j]);
}
}
printf("The first matrix is\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c1;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
printf("Enter the number of rows and columns of second matrix\n");
scanf("%d%d",&r2,&c2);
int B[r2][c2];
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("Enter the %d row and %d column element of B matrix: ",i+1,j+1);
scanf("%d",&B[i][j]);
}
}
printf("The second matrix is\n");
for(i=0;i<r2;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",B[i][j]);
}
printf("\n");
}
printf("For the matrix multiplication process, we need number of columns of A matrix equal to the number of rows of B matrix\n");
if(c1==r2)
{
int C[r1][c2];
printf("Matrix multiplication process is possible for AxB\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
C[i][j]=0;
for(k=0;k<c1;k++)
{
C[i][j]=C[i][j]+A[i][k]*B[k][j];
}
}
}
printf("The muliplicative matrix is: \n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
printf("%d\t",C[i][j]);
}
printf("\n");
}
}
else
{
printf("Matrix multiplication operation is not possible\n");
}
return 0;
}
