//deleting spaces in strings

#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count=0;
    char str[50];
    printf("Enter the string\n");
    gets(str);
    int n=strlen(str);
    for(i=0;i<n;i++){
        if (str[i]==' '){
            count ++;
            for(j=i;j<n-1;j++){
                str[j]=str[j+1];
            }
        }
    }
    for(i=0;i<count;i++){
        str[n-i-1]='\0';
    }

    puts(str);
    return 0;
}
