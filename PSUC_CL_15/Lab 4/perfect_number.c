#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for (i=1;i<n;i++)
    {
        if (n%i==0)
            sum=sum+i;
    }
    if (sum==n) printf("The given number is perfect");
    else printf("The given number is not perfect");
    return 0;
}
