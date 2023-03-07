//find a element in a matrix that is largest in its column as well as smallest in its row

#include <stdio.h>

int main()
{
    int a[10][10],m,n,i,j,k;
    printf("Enter dimension\n");
    scanf("%d%d",&m,&n);
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
    int small,large,count,p,t;
    count=0;
    for(i=0;i<m;i++){
        small=a[i][0];
        for(j=0;j<n;j++){
            if(a[i][j]<small){
                small=a[i][j];
            }
        }
        for(j=0;j<n;j++){
            if(a[i][j]==small){
                p=j;
                break;
            }
        }
        large=a[0][p];
        for(k=0;k<m;k++){
            if(a[k][p]>large){
                large= a[k][p];
            }
        }
        for(k=0;k<m;k++){
            if(a[k][p]==large){
                t=k;
                break;
            }
        }
        if(i==t){
            printf("\n a[%d][%d] is largest in column and smallest in row",i,p);
            count++;
        }
    }
    if(count==0){
        printf("no such element");
    }
    return 0;
}

