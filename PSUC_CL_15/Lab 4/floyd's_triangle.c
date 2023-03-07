#include<stdio.h>
int main()
{
    int n,i,j,p=1;
    printf("Enter the limit of Floyd's triangle:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
        {
            printf("%d\t",p);
            p++;
        }
        printf("\n");
    }
    return 0;
}
