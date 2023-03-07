#include<stdio.h>
#include<math.h>

int main()
{
    char c;
    int num;
    printf("Enter 'b' for binary conversion or 'd' for decimal conversion:");
    scanf("%c",&c);
    switch (c)
    {
    case 'b' :
        printf("Enter decimal number");
        scanf("%d",&num);
        int i=0,a[10],n=num,j;
        while(n!=0){
            a[i]=n%2;
            n=n/2;
            i++;
        }
        printf("Binary number is :");
        for(j=i-1;j>=0;j--){
            printf("%d",a[j]);
        }
        break;

    case 'd' :
        printf("Enter binary number");
        scanf("%d",&num);
        int dig,sum;
        n=num;
        i=0;
        sum=0;
        while(n>0){
            dig=n%10;
            n=n/10;
            sum=sum + dig*(pow(2,i));
            i++;
        }
        printf("Decimal number is : %d",sum);
        break;
    }
    return 0;
}





