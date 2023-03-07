#include<stdio.h>
int main()
{
    int a[10],n,i,j,small,large,temp;
    char s;
       printf("enter 'a' for ascending or 'd' for descending\n");
    scanf("%c",&s);
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements of the array \n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

    switch (s)
    {
        case 'a':for (i=0;i<n;i++)
        {
            for (j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
         printf("%d ",a[i]);
        }
        break;
        case'd':for (i=0;i<n;i++)
        {
            for (j=0;j<n-1-i;j++)
            {
                if(a[j]<a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        printf("%d ",a[i]);
        }
        break;



    }
return 0;
}
