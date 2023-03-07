#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter a string\n");
    gets(str);
    int n =strlen(str);
    int count=0;
    int i=0;
    if(str[0]==' ') count--;
    if(str[n-1]==' ') count --;
    for (i=0;i<n;i++)
    {
        if (str[i]==' ' && str[i+1]!= ' ')
        {
            count++;
        }
    }
    printf("Number of words =%d",count+1);
    return 0;
}
