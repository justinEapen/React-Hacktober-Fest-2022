# include<stdio.h>
void main()
{
int m,n,i,j,A[20][20],T[20][20];
printf("Enter the order of the matrix: ");
scanf("%d%d",&m,&n);
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("Enter the elements of matrix A[%d][%d]: ",i,j);
scanf("%d",&A[i][j]);
}
}
printf("The Matrix A:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",A[i][j]);
}
printf("\n");
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
T[j][i]=A[i][j];
}
}
printf("The Transpose of Matrix A: \n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("%d\t",T[i][j]);
}
printf("\n");
}
}