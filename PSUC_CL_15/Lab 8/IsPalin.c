#include<stdio.h>
#include<string.h>

void IsPalin(char a[],int n)
{
    int i,flag=1;
    for (i=0;i<(n/2);i++)
    {
         if(a[i]!=a[n-i-1])
        {
            flag=0;
            break;
        }
    }
    if (flag==0){printf("Not a palindrome");}
    if (flag==1) {printf("It is a palindrome");}
}
int main()
{
    char a[20] ;
    printf("Enter the string:");
    gets(a);
    int n=strlen(a);
    IsPalin(a,n);
    return 0;

}

