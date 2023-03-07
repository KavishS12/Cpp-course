#include<stdio.h>
int main()
{
    int m,n,i,j,p,q,k;
    int a[10][10],b[10][10];
    printf("enter the number of rows and columns of the first matrix\n");
    scanf("%d%d",&m,&n);
    printf("enter the number of rows and columns of the second matrix\n");
    scanf("%d%d",&p,&q);
     if (n==p)
    {
        printf("matrix multiplication is possible\n");
    }
    else
    {
        printf("matrix multiplication is not possible");
        exit (0);
    }
    printf("enter the elements of first matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the elements of second matrix\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[10][10];
    for (i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
          c[i][j]=0;
          for(k=0;k<n;k++)
          {
             c[i][j]+= a[i][k]*b[k][j];
          }
        }
    }
    printf("the product matrix is:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<q;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


