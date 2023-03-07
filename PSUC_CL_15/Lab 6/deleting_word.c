#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l1,l2,flag,count1,pos,m,k;
    char a[80],b[80];
    printf("Enter the sentence:");
    gets(a);

    l1=strlen(a);
    printf("Enter the substring to be deleted:");
    gets(b);
    l2=strlen(b);
    for(i=0;i<l1;i++){
        flag=1;
        if (a[i]==b[0]){
            pos=i;
            for(j=1;j<l2;j++){
                if (a[i+j]==b[j]){
                    flag=0;
                    continue;}
                else{
                    flag=1;
                    break;
                }
            }
        }
            if (flag==0){
                for(m=0;m<l2;m++){
                    for(k=pos;k<l1;k++)
                        a[k]=a[k+1];
                }
            }
    }
    puts(a);
    return 0;
}
