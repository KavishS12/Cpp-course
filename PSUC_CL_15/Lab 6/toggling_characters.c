#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string\n");
    gets(str);
    int i,n= strlen(str);
    for(i=0;i<n;i++)
    {
        if (str[i]>=97 && str[i]<=122)
        {
            str[i] =str[i]-32;
        }

    }

puts(str);
return 0;
}

