#include<stdio.h>
int main()
{
    int i,j,n,k,p;
    printf("Enter the values of n and k respectively\n");
    scanf("%d%d",&n,&k);
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=k;j++)
        {
            p=i*j;
            printf("%d\t",p);
        }
        printf("\n");
    }
    return 0;

}

