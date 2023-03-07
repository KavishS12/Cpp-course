#include <stdio.h>
#include<math.h>

void PSquare(int a[10][10],int m,int n)
{
    int i,j;
    float c;
    for (i=0;i<m;i++){
       for (j=0;j<n;j++){
               c=sqrt((float)a[i][j]);
               if((c-sqrt(a[i][j]))==0){
                   a[i][j]=sqrt(a[i][j]);
               }
       }
    }
}

int main()
{
    int a[10][10],m,n,i,j;
    printf("Enter rows\n");
    scanf("%d",&m);
    printf("Enter columns\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for (i=0;i<m;i++){
       for (j=0;j<n;j++){
           scanf("%d",&a[i][j]);
       }
    }
    printf("the matrix is :\n");
    for (i=0;i<m;i++){
       for (j=0;j<n;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    PSquare(a,m,n);
    printf("matrix 2 is:\n");
    for (i=0;i<m;i++){
       for (j=0;j<n;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
    }

    //bubble-sorting columns

    int k,temp;
    for(j=0;j<n;j++){
        for(i=0;i<(m-1);i++){
            for(k=i+1;k<m;k++){
                if(a[k][j]<a[i][j]){
                    temp=a[i][j];
                    a[i][j]=a[k][j];
                    a[k][j]=temp;
                }
            }
        }
    }
     printf("matrix 3 is:\n");
    for (i=0;i<m;i++){
       for (j=0;j<n;j++){
           printf("%d\t",a[i][j]);
       }
       printf("\n");
    }
    return 0;
}
