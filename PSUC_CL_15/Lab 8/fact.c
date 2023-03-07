#include<stdio.h>

int fact(int n)
{
    int i,f =1;
    for (i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int m;
    printf("Enter the number:");
    scanf("%d",&m);
    printf("Factorial of the number is %d\n",fact(m));
    int n,r;
    float ncr;
    printf("Enter n and r for ncr respectively :");
    scanf("%d%d",&n,&r);
    if(r>n)
    {
      printf ("Not possible,r should be less than or equal to n");
      exit(0);
    }
    ncr = fact(n)/(fact(r)*fact(n-r));
    printf("The value of ncr is :%f",ncr);
    return 0;

}
