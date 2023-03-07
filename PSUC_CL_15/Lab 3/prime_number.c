#include<stdio.h>
int main()
{
    int a,b,i,j,c;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    i=a;
    while (i<=b)
    {
        c=1;
        j=2;
        while(j<i)
        {
            if (i%j==0)
            c=0;
            j++;
        }
    if (c==1)
        printf("%d is prime\n",i);
    i++;
    }
}
