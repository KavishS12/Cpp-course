#include<stdio.h>
int main()
{
    int a[10],n,i,small,large;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elementys of the array \n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    small=a[0];
    for(i=0;i<n;i++)
    {
        if (a[i]< small)
        {small=a[i];}
    }
    large=a[0];
    for(i=0;i<n;i++)
    {
        if (a[i]>large)
        {large=a[i];}
    }
    printf("Smallest element is %d\n",small);
    printf("Largest element is %d",large);
    return 0;

}
