//find maximum distance between 2 'a'

#include<stdio.h>
#include<string.h>

int main()
{
    char str[25];
    printf("enter the string:");
    gets(str);
    int i,j,n=strlen(str);
    int t,dist;
    dist=0;
    for(i=0;i<n;i++){
        if (str[i]='a'){
          for(j=i+1;j<n;j++){
            if (str[j]=='a'){
                t=j-i-1;
                break;
            }
          }
        }
        if(t>dist){dist=t;}
    }
    printf("max distance is %d",dist);
    return 0;
}
