#include<stdio.h>
int main()
{
printf("Matrix addition of matrix!!\n");
printf("Matrix Addition is only possible for same ordered matrix\n");
int r,c,i,j;
printf("Enter the number of rows: ");
scanf("%d",&r);
printf("Enter the number of columns: ");
scanf("%d",&c);
int A[r][c],B[r][c],C[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter the %d%d element of the first matrix: ",i+1,j+1);
scanf("%d",&A[i][j]);
}
}
printf("The first matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("Enter the %d%d element of the second matrix: ",i+1,j+1);
scanf("%d",&B[i][j]);
}
}
printf("The second matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",B[i][j]);
}
printf("\n");
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
C[i][j]=A[i][j]+B[i][j];
}
}
printf("The Additive matrix is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",C[i][j]);
}
printf("\n");
}
return 0;
}
