#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two numbers");
    scanf("%d%d",&a,&b);
    int sum=a+b;
    int diff=a-b;
    int product=a*b;
    int quotient=a/b;
    printf("sum of numbers is %d \n",sum);
    printf("differnce of numbers is %d \n",diff);
    printf("product of numbers is %d \n",product);
    printf("quotient of two numbers is %d \n",quotient);

    return 0;
}
