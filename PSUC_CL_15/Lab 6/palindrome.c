#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    printf("Enter a string\n");
    gets(str);
    int i;
    int flag=1;
    int n=strlen(str);
    for (i=0;i<(n/2);i++)
    {
        if(str[i]!=str[n-i-1])
        {
            flag=0;
            break;
        }
    }
    if (flag==0) printf("It is not a palindrome.");
    if (flag==1)  printf("It is a palindrome.");
    return 0;
}
