#include<stdio.h>
int main()
{
    int m,n,i,j;
    int a[10][10];
    printf("enter the number of rows and columns of the matrix\n");
    scanf("%d%d",&m,&n);
    if(m!=n)
    {
    printf("matrix unsymmetric ,enter a square matrix");
    exit(0);
    }
    printf("enter the elements");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        if(a[i][j]!=a[j][i])
         {printf("matrix is not symmetrical");
         exit(0);}
        }
    }
    printf("matrix is symmetrical");
    return 0;
}
