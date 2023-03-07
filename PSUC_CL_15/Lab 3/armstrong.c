#include<stdio.h>
#include<math.h>
int main()
{
    int n,num,dig,sum;
    printf("Enter the number\n");
    scanf("%d",&n);
    num=n;
    sum=0;
    while (num>0)
    {
        dig=num%10;
        sum=sum+ pow(dig,3);
        num=num/10;
    }
    if (sum==n) {printf("IT IS AN ARMSTRONG NUMBER");}
    else printf("IT IS NOT AN ARMSTRONG NUMBER");

    return 0;

}
