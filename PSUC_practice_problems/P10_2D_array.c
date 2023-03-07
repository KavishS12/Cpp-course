//function sum2PN() takes array as input and prints all the elements as sum of 2 prime numbers ,if an element cant be expressed as sum of prime numbers it is squared

#include<stdio.h>

int IsPrime(int num)
{
    if (num <= 1)
        return 0;

    for (int i = 2; i < num; i++)
        if (num % i == 0)
            return 0;

    return 1;
}

void sum2PN(int a[10][10],int m,int n)
{

    int i,j,k,num,flag;
    for(i=0;i<m;i++){
        for (j=0;j<n;j++){
            flag =0;
           num = a[i][j];
           for(k=2;k<num;k++)
           {
                if (IsPrime(k)== 1 && IsPrime(num-k)==1){
                   if(k<=num-k){
                      printf("%d = %d + %d\n",num,k,num-k);
                      flag=1;
                   }
                }
           }
          if(flag==0) {a[i][j]=(num*num);}
        }
    }
}

int main()
{
    int a[10][10],m,n,i,j;
    printf("Enter dimensions\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    sum2PN(a,m,n);
    printf("The new matrix is :\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;

}
