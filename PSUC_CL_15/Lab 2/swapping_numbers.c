#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("The new numbers are %d and %d",a,b);
    return 0;
}
