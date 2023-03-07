#include<stdio.h>
int main()
{
    int n,num,dig,r;
    printf("Enter the number\n");
    scanf("%d",&n);
    r=0;
    num=n;
    while (num>0)
    {
      dig=num%10;
      r=r*10 +dig;
      num=num/10;
    }
    if (r==n)
        {printf("number is a palindrome");}
    else
        {printf("number is not a palindrome");}

    return 0;

}
