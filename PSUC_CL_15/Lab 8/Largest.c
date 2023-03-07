#include<stdio.h>

int Largest(int a[],int n)
{
    int i;
    int m = a[0];
    for (i=0;i<n;i++)
    {
        if (a[i]>m)
         {m = a[i];}
    }
    return m;
}

int main()
{
    int i,a[10],n;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int l = Largest(a,n);
    printf("The largest element is : %d",l);
    return 0;
}
