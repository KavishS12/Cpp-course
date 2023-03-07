#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the number \n");
    scanf("%d",&x);
    if (x>0)
    {
        y=1;
    }
    else if (x=0)
    {
        y=0;
    }
    else if (x<0)
    {
        y=-1;
    }
    printf("Result=%d",y);

    return 0;
}
