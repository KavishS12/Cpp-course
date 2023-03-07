#include<stdio.h>
#include<string.h>
int main()
{
    char a[30][30],temp[30];
    int  i,n,j;
    printf("Enter the number of names:");
    scanf("%d",&n);
    printf("Enter the names\n");
    for (i=0;i<n;i++)
        {gets(a[i]);}
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(a[i],a[j])>0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }
    for (i=0;i<n;i++)
        puts(a[i]);
    return 0;
}

