#include<stdio.h>
#include<math.h>
int main()
{
    int m,i,j,trace ;
    float norm;
    int a[10][10];
    printf("enter the dimension of the square matrix\n");
    scanf("%d",&m);
    printf("enter the elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    trace =0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if (i==j)
            {trace=trace+a[i][j];}
        }
    }
    norm=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            norm = norm + (a[i][j])*(a[i][j]);
        }
    }
    norm = sqrt(norm);
    printf("the trace of the matrix is %d\n",trace);
    printf("the norm of the matrix is %f",norm);
    return 0;
}


