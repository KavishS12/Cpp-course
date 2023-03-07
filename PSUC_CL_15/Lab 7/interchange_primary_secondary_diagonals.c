#include<stdio.h>
int main()
{
    int m,n,i,j;
    int a[10][10],b[10][10];
    printf("enter the number of rows and columns of the matrix:");
    scanf("%d%d",&m,&n);
    if(m!=n)
    {
    printf("matrix unsymmetric ,enter a square matrix");
    exit(0);
    }
    printf("enter the elements:");
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
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           b[i][j]=a[i][j];
        }
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            b[i][i]=a[i][n-i-1];
            b[i][n-i-1]=a[i][i];
        }
    }
    printf("The resultant matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

