#include<stdio.h>
int main()
{
    int a[10],n,i,j,p;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of the array \n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    for (i=0;i<n;i++)
    {
     p=0;
     for (j=1;j<=a[i];j++)
     {
         if (a[i]%j==0)
         p++;
     }
     if (p==2) {printf("%d is prime\n",a[i]);}
    }
return 0;
}
