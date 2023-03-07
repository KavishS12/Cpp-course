#include<stdio.h>
int CornerSum(int a[10][10],int row ,int col)
{
    int sum;
    sum = a[0][0]+a[0][col-1]+a[row-1][0]+a[row-1][col-1];
    return sum;
}
int main()
{
    int a[10][10],i,j,m,n;
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of columns:");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (i=0;i<m;i++){
        for (j=0;j<n;j++){
            scanf ("%d",&a[i][j]);
        }
    }
    printf("The matrix is:\n");
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    printf("The sum of corner elements is %d",CornerSum(a,m,n));

}
