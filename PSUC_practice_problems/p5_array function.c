//write a function to verify coprime numbers and print all pairs of coprime in an array

#include<stdio.h>

int isCoprime(int m,int n)
{
    int i;
     int flag=1;
    if (n>m){
    for(i=2;i<=n;i++){
        if(m%i==0 && n%i==0){
            flag =0;
            break;
        }
    }
    }
      if (m>n){
    for(i=2;i<=m;i++){
        if(m%i==0 && n%i==0){
            flag =0;
            break;
        }
    }
    }
    if(flag==1) return 1;
    if(flag==0) return 0;
}

int main()
{
    int a[10],i,n,j,c;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("the pair of coprimes are:\n");
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            c=isCoprime(a[i],a[j]);
            if(c==1){
                printf("%d,%d\n",a[i],a[j]);
            }
        }
    }
    return 0;
}

