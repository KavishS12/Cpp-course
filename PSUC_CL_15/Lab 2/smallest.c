#include<stdio.h>
int main()
{
    int a,b,c,smallest;
    printf("Enter the three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    smallest=(a<b)?(a<c?a:c):(b<c?b:c);
    printf("The smallest number is %d",smallest);
    return 0;
}
