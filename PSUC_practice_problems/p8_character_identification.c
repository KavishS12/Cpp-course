//program to check if a character is letter or digit ,also if lowercase convert to upper case and vice versa

#include<stdio.h>

int main()
{
    char c;
    printf("enter the character:");
    scanf("%c",&c);
    if (c>=65 && c<=90)
    {
         printf("%c",c+32);
    }
    if (c>=97 && c<=122)
    {
         printf("%c",c-32);
    }
    if(c>=48 && c<=57)
    {
        printf("input character is a digit");
    }
    return 0;
}
aa
